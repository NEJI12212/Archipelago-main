-- gex Connector Lua
-- Created by Mike Jackson (jjjj12212) and Smg065

local socket_loaded, socket = pcall(require, "socket")
if not socket_loaded then
  print("Please place this file in the 'Archipelago/data/lua' directory. Use the Archipelago Launcher's 'Browse Files' button to find the Archipelago directory.")
  return
end
local json = require('json')
local math = require('math')
require('common')

local SCRIPT_VERSION = 1
local GVR_VERSION = "V0.1"
local PLAYER = ""
local SEED = 0

local GLV_SOCK = nil

local STATE_OK = "Ok"
local STATE_TENTATIVELY_CONNECTED = "Tentatively Connected"
local STATE_INITIAL_CONNECTION_MADE = "Initial Connection Made"
local STATE_UNINITIALIZED = "Uninitialized"
local PREV_STATE = ""
local CUR_STATE =  STATE_UNINITIALIZED
local FRAME = 0
local VERROR = false
local CLIENT_VERSION = false
local GOAL_PRINTED = false

local AP_TIMEOUT_COUNTER = 0


-------------- MAP VARS -------------
local CURRENT_MAP = nil;
local CURRENT_HUB = nil;
local WORLD_ID = 99;
local WORLD_NAME = "";

-------------- GARIB LOGIC -----------

local GARIB_GROUPS = false
local GARIB_ORDER = {}

-------------- TOTALS VARS -----------
local TOTAL_LIVES = 0;
local TOTAL_SINGLE_GARIBS = 0;
local TOTAL_WORLD_GARIBS = {
	['AP_ATLANTIS_L1_GARIBS'] = 0,
	['AP_ATLANTIS_L2_GARIBS'] = 0,
	['AP_ATLANTIS_L3_GARIBS'] = 0,
	['AP_ATLANTIS_BONUS_GARIBS'] = 0,
	['AP_CARNIVAL_L1_GARIBS'] = 0,
	['AP_CARNIVAL_L2_GARIBS'] = 0,
	['AP_CARNIVAL_L3_GARIBS'] = 0,
	['AP_CARNIVAL_BONUS_GARIBS'] = 0,
	['AP_PIRATES_L1_GARIBS'] = 0,
	['AP_PIRATES_L2_GARIBS'] = 0,
	['AP_PIRATES_L3_GARIBS'] = 0,
	['AP_PIRATES_BONUS_GARIBS'] = 0,
	['AP_PREHISTORIC_L1_GARIBS'] = 0,
	['AP_PREHISTORIC_L2_GARIBS'] = 0,
	['AP_PREHISTORIC_L3_GARIBS'] = 0,
	['AP_PREHISTORIC_BONUS_GARIBS'] = 0,
	['AP_FORTRESS_L1_GARIBS'] = 0,
	['AP_FORTRESS_L2_GARIBS'] = 0,
	['AP_FORTRESS_L3_GARIBS'] = 0,
	['AP_FORTRESS_BONUS_GARIBS'] = 0,
	['AP_SPACE_L1_GARIBS'] = 0,
	['AP_SPACE_L2_GARIBS'] = 0,
	['AP_SPACE_L3_GARIBS'] = 0,
	['AP_SPACE_BONUS_GARIBS'] = 0
};
local MAX_WORLD_GARIBS = {
	['AP_ATLANTIS_L1_GARIBS'] = 50,
	['AP_ATLANTIS_L2_GARIBS'] = 60,
	['AP_ATLANTIS_L3_GARIBS'] = 80,
	['AP_ATLANTIS_BONUS_GARIBS'] = 25,
	['AP_CARNIVAL_L1_GARIBS'] = 65,
	['AP_CARNIVAL_L2_GARIBS'] = 80,
	['AP_CARNIVAL_L3_GARIBS'] = 80,
	['AP_CARNIVAL_BONUS_GARIBS'] = 20,
	['AP_PIRATES_L1_GARIBS'] = 70,
	['AP_PIRATES_L2_GARIBS'] = 60,
	['AP_PIRATES_L3_GARIBS'] = 80,
	['AP_PIRATES_BONUS_GARIBS'] = 50,
	['AP_PREHISTORIC_L1_GARIBS'] = 80,
	['AP_PREHISTORIC_L2_GARIBS'] = 80,
	['AP_PREHISTORIC_L3_GARIBS'] = 80,
	['AP_PREHISTORIC_BONUS_GARIBS'] = 60,
	['AP_FORTRESS_L1_GARIBS'] = 60,
	['AP_FORTRESS_L2_GARIBS'] = 60,
	['AP_FORTRESS_L3_GARIBS'] = 70,
	['AP_FORTRESS_BONUS_GARIBS'] = 56,
	['AP_SPACE_L1_GARIBS'] = 50,
	['AP_SPACE_L2_GARIBS'] = 50,
	['AP_SPACE_L3_GARIBS'] = 80,
	['AP_SPACE_BONUS_GARIBS'] = 50
};


--------------- DEATH LINK ----------------------
local DEATH_LINK_TRIGGERED = false;
local DEATH_LINK = true

--------------- TAG LINK ------------------------
local TAG_LINK_TRIGGERED = false
local TAG_LINK = true

local checked_map = { -- [ap_id] = location_id; -- Stores locations you've already checked
	["NA"] = "NA"
}

local receive_map = { -- [ap_id] = item_id; --  Required for Async Items
    ["NA"] = "NA"
}

local ITEM_TABLE = {}; -- reverses ROM_ITEM so the key is the Item
local ROM_ITEM_TABLE = {
    "AP_JUMP",
    "AP_DOUBLE_JUMP",
    "AP_CARTWHEEL",
    "AP_CRAWL",
    "AP_FISTSLAM",
    "AP_PUSH",
    "AP_LOCATE_BALL",
    "AP_LEDGEGRAB",
    "AP_LOCATE_GARIB",
    "AP_DRIBBLE",
    "AP_QUICKSWAP",
    "AP_SLAP",
    "AP_THROW",
    "AP_TOSS",
    "AP_RUBBER_BALL",
    "AP_BOWLING_BALL",
    "AP_POWER_BALL",
    "AP_BEARING_BALL",
    "AP_CRYSTAL_BALL",
    "AP_ATLANTIS_L1_GARIBS",
    "AP_ATLANTIS_L2_GARIBS",
    "AP_ATLANTIS_L3_GARIBS",
    "AP_ATLANTIS_BONUS_GARIBS",
    "AP_CARNIVAL_L1_GARIBS",
    "AP_CARNIVAL_L2_GARIBS",
    "AP_CARNIVAL_L3_GARIBS",
    "AP_CARNIVAL_BONUS_GARIBS",
    "AP_PIRATES_L1_GARIBS",
    "AP_PIRATES_L2_GARIBS",
    "AP_PIRATES_L3_GARIBS",
    "AP_PIRATES_BONUS_GARIBS",
    "AP_PREHISTORIC_L1_GARIBS",
    "AP_PREHISTORIC_L2_GARIBS",
    "AP_PREHISTORIC_L3_GARIBS",
    "AP_PREHISTORIC_BONUS_GARIBS",
    "AP_FORTRESS_L1_GARIBS",
    "AP_FORTRESS_L2_GARIBS",
    "AP_FORTRESS_L3_GARIBS",
    "AP_FORTRESS_BONUS_GARIBS",
    "AP_SPACE_L1_GARIBS",
    "AP_SPACE_L2_GARIBS",
    "AP_SPACE_L3_GARIBS",
    "AP_SPACE_BONUS_GARIBS",
    "AP_LIFE_UP",
    "AP_HERCULES_POTION",
    "AP_SPEED_POTION",
    "AP_STICKY_POTION",
    "AP_ATLANTIS_L1_GATE",
    "AP_ATLANTIS_L2_RAISE_WATER",
    "AP_ATLANTIS_L2_WATER_DRAIN",
    "AP_ATLANTIS_L2_GATE",
    "AP_ATLANTIS_L3_SPIN_WHEEL",
    "AP_ATLANTIS_L3_CAVE",
    "AP_MAX_ITEM"
};

for index, item in pairs(ROM_ITEM_TABLE)
do
    ITEM_TABLE[item] = index - 1
end

local WORLDS_TABLE = {}; -- reverses ROM_ITEM so the key is the Item
local ROM_WORLDS_TABLE = {
    "AP_ATLANTIS_L1",
    "AP_ATLANTIS_L2",
    "AP_ATLANTIS_L3",
    "AP_ATLANTIS_BOSS",
    "AP_ATLANTIS_BONUS",
    "AP_CARNIVAL_L1",
    "AP_CARNIVAL_L2",
    "AP_CARNIVAL_L3",
    "AP_CARNIVAL_BOSS",
    "AP_CARNIVAL_BONUS",
    "AP_PIRATES_L1",
    "AP_PIRATES_L2",
    "AP_PIRATES_L3",
    "AP_PIRATES_BOSS",
    "AP_PIRATES_BONUS",
    "AP_PREHISTORIC_L1",
    "AP_PREHISTORIC_L2",
    "AP_PREHISTORIC_L3",
    "AP_PREHISTORIC_BOSS",
    "AP_PREHISTORIC_BONUS",
    "AP_FORTRESS_L1",
    "AP_FORTRESS_L2",
    "AP_FORTRESS_L3",
    "AP_FORTRESS_BOSS",
    "AP_FORTRESS_BONUS",
    "AP_SPACE_L1",
    "AP_SPACE_L2",
    "AP_SPACE_L3",
    "AP_SPACE_BOSS",
    "AP_SPACE_BONUS",
    "AP_TRAINING_WORLD",
    "AP_MAX_WORLDS"
};

for index, item in pairs(ROM_WORLDS_TABLE)
do
    WORLDS_TABLE[item] = index
end


-- Address Map for GEX
local ADDRESS_MAP = {
	
}

GEXHACK = {
    RDRAMBase = 0x80000000,
    RDRAMSize = 0x800000,

    base_pointer = 0x400000,
    pc = 0x0,
    ap_items = 0x9B,
    ap_world = 0x720,
      hub_entrance = 0x0,
      door_number = 0x1,
      garib_locations = 0x4,
        garib_id = 0x4,
        garib_collected = 0x6,
        garib_object_id = 0x8,
      garib_size = 0xC,
      garib_all_collected = 0x3C4,
      enemy_locations = 0x3C8,
        enemy_id = 0x4,
        enemy_collected = 0x6,
      enemy_size = 0x8,
      life_locations = 0x440,
        life_id = 0x4,
        life_collected = 0x6,
      life_size = 0x8,
      tip_locations = 0x490,
        tip_id = 0x4,
        tip_collected = 0x6,
      tip_size = 0x8,
      checkpoint_locations = 0x4B8,
        checkpoint_id = 0x4,
        checkpoint_collected = 0x6,
      checkpoint_size = 0xC,
      switch_locations = 0x4F4,
        switch_id = 0x4,
        switch_collected = 0x6,
      switch_size = 0xC,
      potion_locations = 0x530,
        potion_id = 0x4,
        potion_collected = 0x6,
      potion_size = 0x8,
      goal = 0x560,
    ap_world_offset = 0x564,
    ap_hub_order = 0x0,
    garib_totals = 0xE,
    settings = 0x96,
      garib_logic = 0x0,
      randomize_checkpoints = 0x1,
      randomize_switches = 0x2,
      deathlink = 0x3,
      taglink = 0x4,
    hub_map = 0x8,
    world_map = 0x9,
    pc_deathlink = 0x6E2,
    n64_deathlink = 0x6E5,
    pc_taglink = 0x6E3,
    n64_taglink = 0x6E6,
    ROM_MAJOR_VERSION = 0x71C,
    ROM_MINOR_VERSION = 0x71D,
    ROM_PATCH_VERSION = 0x71E
}

function GEXHACK:new(t)
    t = t or {}
    setmetatable(t, self)
    self.__index = self
   return self
end

function GEXHACK:isPointer(value)
    return type(value) == "number" and value >= self.RDRAMBase and value < self.RDRAMBase + self.RDRAMSize;
end

function GEXHACK:dereferencePointer(addr)
    if type(addr) == "number" and addr >= 0 and addr < (self.RDRAMSize - 4) then
        local address = mainmemory.read_u32_be(addr);
        if GEXHACK:isPointer(address) then
            return address - self.RDRAMBase;
        else
            print("Failed to Defref:")
            print(address)
            return nil;
        end
    end
end

function GEXHACK:getWorldOffset(world_id)
    if world_id == 0
    then
        return self.ap_world
    elseif world_id == 1
    then 
        return self.ap_world + self.ap_world_offset
    else
        return self.ap_world + (self.ap_world_offset * world_id)
    end
end

function GEXHACK:getOffsetLocation(location_addr, offset, type)
    local offset_size = 0
    if type == "life"
    then
        offset_size = self.life_size
    end

    if offset == 0
    then
        return location_addr
    elseif offset == 1
    then 
        return location_addr + offset_size
    else
        return location_addr + (offset_size * offset)
    end
end

function GEXHACK:checkRealFlag(offset, byte)
    -- print("Checking Real Flags")
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
	local realptr = GEXHACK:dereferencePointer(self.real_flags + hackPointerIndex);
    -- if realptr == nil
    -- then
    --     return false
    -- end
    local currentValue = mainmemory.readbyte(realptr + offset);
    if bit.check(currentValue, byte) then
        return true;
    end
    return false;
end

function GEXHACK:checkLocationFlag(world_id, type, offset, item_id)
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    local world_address = hackPointerIndex + GEXHACK:getWorldOffset(world_id)
    if type == "garib"
    then
        local offset_location = GEXHACK:getOffsetLocation(self.garib_locations, offset, type)
        local check_id = mainmemory.read_u16_be(world_address + offset_location + self.garib_id)
        if check_id ~= item_id then
            print("GARIB Item ID DOES NOT MATCH! CHECK OFFSET FOR ID")
            print(item_id)
            print(check_id)
        end
        local check_value = mainmemory.readbyte(world_address + offset_location + self.garib_collected)
        if check_value == 0x0
        then
            return false
        else
            return true
        end
    elseif type == "life"
    then
        local offset_location = GEXHACK:getOffsetLocation(self.life_locations, offset, type)
        local check_id = mainmemory.read_u16_be(world_address + offset_location + self.life_id)
        if check_id ~= item_id then
            print("LIFE Item ID DOES NOT MATCH! CHECK OFFSET FOR ID")
            print(item_id)
        end
        local check_value = mainmemory.readbyte(world_address + offset_location + self.life_collected)
        if check_value == 0x0
        then
            return false
        else
            return true
        end
    elseif type == "checkpoint"
    then
        local offset_location = GEXHACK:getOffsetLocation(self.checkpoint_locations, offset, type)
        local check_id = mainmemory.read_u16_be(world_address + offset_location + self.checkpoint_id)
        if check_id ~= item_id then
            print("CHECKPOINT Item ID DOES NOT MATCH! CHECK OFFSET FOR ID")
            print(item_id)
        end
        local check_value = mainmemory.readbyte(world_address + offset_location + self.checkpoint_collected)
        if check_value == 0x0
        then
            return false
        else
            return true
        end
    elseif type == "switch"
    then
        local offset_location = GEXHACK:getOffsetLocation(self.switch_locations, offset, type)
        local check_id = mainmemory.read_u16_be(world_address + offset_location + self.switch_id)
        if check_id ~= item_id then
            print("SWITCH Item ID DOES NOT MATCH! CHECK OFFSET FOR ID")
            print(item_id)
        end
        local check_value = mainmemory.readbyte(world_address + offset_location + self.switch_collected)
        if check_value == 0x0
        then
            return false
        else
            return true
        end
    elseif type == "tip"
    then
        local offset_location = GEXHACK:getOffsetLocation(self.tip_locations, offset, type)
        local check_id = mainmemory.read_u16_be(world_address + offset_location + self.tip_id)
        if check_id ~= item_id then
            print("TIP Item ID DOES NOT MATCH! CHECK OFFSET FOR ID")
            print(item_id)
        end
        local check_value = mainmemory.readbyte(world_address + offset_location + self.tip_collected)
        if check_value == 0x0
        then
            return false
        else
            return true
        end
    elseif type == "enemy"
    then
        local offset_location = GEXHACK:getOffsetLocation(self.enemy_locations, offset, type)
        local check_id = mainmemory.read_u16_be(world_address + offset_location + self.enemy_id)
        if check_id ~= item_id then
            print("ENEMY Item ID DOES NOT MATCH! CHECK OFFSET FOR ID")
            print(item_id)
        end
        local check_value = mainmemory.readbyte(world_address + offset_location + self.enemy_collected)
        if check_value == 0x0
        then
            return false
        else
            return true
        end
    elseif type == "potion"
    then
        local offset_location = GEXHACK:getOffsetLocation(self.potion_locations, offset, type)
        local check_id = mainmemory.read_u16_be(world_address + offset_location + self.potion_id)
        if check_id ~= item_id then
            print("POTION Item ID DOES NOT MATCH! CHECK OFFSET FOR ID")
            print(item_id)
        end
        local check_value = mainmemory.readbyte(world_address + offset_location + self.potion_collected)
        if check_value == 0x0
        then
            return false
        else
            return true
        end
    end
end

function GEXHACK:checkEnemyGaribLocationFlag(world_id, offset_list, ap_id)
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    local world_address = hackPointerIndex + GEXHACK:getWorldOffset(world_id)
    for _, offset in pairs(offset_list)
    do
        local offset_location = GEXHACK:getOffsetLocation(self.garib_locations, offset, "garib")
        local check_id = mainmemory.read_u16_be(world_address + offset_location + self.garib_object_id)
        if check_id == ap_id then
             local check_value = mainmemory.readbyte(world_address + offset_location + self.garib_collected)
            if check_value ~= 0x0
            then
                return true
            end
        end
    end
    return false
end

function GEXHACK:getSettingPointer()
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    if hackPointerIndex == nil
    then
        return
    end
	return self.settings + hackPointerIndex;
end

function GEXHACK:setGaribLogic(glogic)
    mainmemory.writebyte(self.garib_logic + GEXHACK:getSettingPointer(), glogic);
end

-- function GEXHACK:setGaribSorting(gsort)
--     mainmemory.writebyte(self.garib_sorting + GEXHACK:getSettingPointer(), gsort);
-- end

function GEXHACK:setRandomizeSwitches(switch)
    mainmemory.writebyte(self.randomize_switches + GEXHACK:getSettingPointer(), switch);
end

function GEXHACK:setRandomizeCheckpoint(checkpoint)
    mainmemory.writebyte(self.randomize_checkpoints + GEXHACK:getSettingPointer(), checkpoint);
end

function GEXHACK:setDeathlinkEnabled(newState)
	if newState
	then
		mainmemory.writebyte(self.deathlink + GEXHACK:getSettingPointer(), 1);
	else
		mainmemory.writebyte(self.deathlink + GEXHACK:getSettingPointer(), 0);
	end
    
end

function GEXHACK:setTaglinkEnabled(newState)
	if newState
	then
		mainmemory.writebyte(self.taglink + GEXHACK:getSettingPointer(), 1);
	else
		mainmemory.writebyte(self.taglink + GEXHACK:getSettingPointer(), 0);
	end
end

function GEXHACK:getItemsPointer()
    -- print("Checking Items Flags")
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
	return self.ap_items + hackPointerIndex;
end

function GEXHACK:getItem(index)
    return mainmemory.readbyte(index + self:getItemsPointer());
end

function GEXHACK:setItem(index, value)
    mainmemory.writebyte(index + self:getItemsPointer(), value);
end

function GEXHACK:getWorldMap()
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    if hackPointerIndex == nil
    then
        return 0x0
    end
    return mainmemory.readbyte(hackPointerIndex + self.world_map)
end

function GEXHACK:getHubMap()
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    if hackPointerIndex == nil
    then
        return 0x0
    end
    return mainmemory.readbyte(hackPointerIndex + self.hub_map)
end

function GEXHACK:getPCDeath()
	local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    return mainmemory.readbyte(hackPointerIndex + self.pc_deathlink);
end

function GEXHACK:getPCTag()
	local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    return mainmemory.readbyte(hackPointerIndex + self.pc_taglink);
end

function GEXHACK:setPCDeath(DEATH_COUNT)
	local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    mainmemory.writebyte(hackPointerIndex + self.pc_deathlink, DEATH_COUNT);
end

function GEXHACK:setPCTag(TAG_COUNT)
	local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    mainmemory.writebyte(hackPointerIndex + self.pc_taglink, TAG_COUNT);
end

-- function GEXHACK:getAPDeath()
--    return mainmemory.readbyte(self:getPCPointer() + self.pc_death_ap);
-- end

-- function GEXHACK:getAPTag()
--    return mainmemory.readbyte(self:getPCPointer() + self.pc_tag_ap);
-- end

-- function GEXHACK:setAPDeath(DEATH_COUNT)
--     mainmemory.writebyte(self:getPCPointer() + self.pc_death_ap, DEATH_COUNT);
-- end

-- function GEXHACK:setAPTag(TAG_COUNT)
--     mainmemory.writebyte(self:getPCPointer() + self.pc_tag_ap, TAG_COUNT);
-- end

-- function GEXHACK:getNPointer()
--     local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
--     if hackPointerIndex == nil
--     then
--         return
--     end
-- 	return GEXHACK:dereferencePointer(self.n64 + hackPointerIndex);
-- end

function GEXHACK:getNLocalDeath()
	local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    return mainmemory.readbyte(self.n64_deathlink + hackPointerIndex);
end

function GEXHACK:getNLocalTag()
	local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
   return mainmemory.readbyte(hackPointerIndex + self.n64_taglink);
end

function GEXHACK:getRomVersion()
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    if hackPointerIndex == nil
    then
        return "0"
    end
	major = mainmemory.readbyte(self.ROM_MAJOR_VERSION + hackPointerIndex);
    minor = mainmemory.readbyte(self.ROM_MINOR_VERSION + hackPointerIndex);
    patch = mainmemory.readbyte(self.ROM_PATCH_VERSION + hackPointerIndex);
    if major == 0 and minor == 0 then
        return "0"
    end
    if patch == 0
    then
        return "V"..tostring(major).."."..tostring(minor)
    else
        return "V"..tostring(major).."."..tostring(minor).."."..tostring(patch)
    end
end

function garib_check()
    local checks = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["GARIBS"] ~= nil
            then
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["GARIBS"])
                do
                    checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "garib", locationTable['offset'], locationTable['id'])
                    -- print(loc_id..":"..tostring(checks[loc_id]))
                end
            end
        end
    return checks
end

function enemy_garib_check()
    local checks = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["ENEMY_GARIBS"] ~= nil
            then
                local offset_list = {};
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["ENEMY_GARIBS"])
                do
                    offset_list[loc_id] = locationTable["offset"]
                end
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["ENEMY_GARIBS"])
                do
                    checks[loc_id] = GVR:checkEnemyGaribLocationFlag(WORLD_ID, offset_list, locationTable['object_id'])
                    -- print(loc_id..":"..tostring(checks[loc_id]))
                end
            end
        end
    return checks
end

function garib_group_contruction()
    local checks = {}
    if GARIB_GROUPS == true and GARIB_GROUPS_MAP[WORLD_NAME] ~= nil
    then
        for group_name,group_info in pairs(GARIB_GROUPS_MAP[WORLD_NAME])
        do
            local all_pass = true
            for _,garib_id in pairs(GARIB_GROUPS_MAP[WORLD_NAME][group_name]["garibs"])
            do
                if ADDRESS_MAP[WORLD_NAME]["GARIBS"][garib_id] ~= nil
                    then
                    local offset = ADDRESS_MAP[WORLD_NAME]["GARIBS"][garib_id]["offset"]
                    local num_id = ADDRESS_MAP[WORLD_NAME]["GARIBS"][garib_id]["id"]
                    if GVR:checkLocationFlag(WORLD_ID, "garib", offset, num_id) == false
                    then
                        all_pass = false
                    end
                elseif ADDRESS_MAP[WORLD_NAME]["ENEMY_GARIBS"][garib_id] ~= nil
                then
                    local offset_list = {}
                    for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["ENEMY_GARIBS"])
                    do
                        offset_list[loc_id] = locationTable["offset"]
                    end
                    local object_id = ADDRESS_MAP[WORLD_NAME]["ENEMY_GARIBS"][garib_id]['object_id']
                    if GVR:checkEnemyGaribLocationFlag(WORLD_ID, offset_list, object_id) == false
                    then
                        all_pass = false
                    end
                end
            end
            checks[group_info["id"]] = all_pass
        end
    end
    return checks
end

function life_check()
    local checks = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["LIFE"] ~= nil
            then
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["LIFE"])
                do
                    checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "life", locationTable['offset'], locationTable['id'])
                    -- print(loc_id..":"..tostring(checks[loc_id]))
                end
            end
        end
    return checks
end

function checkpoint_check()
    local checks = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["CHECKPOINT"] ~= nil
            then
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["CHECKPOINT"])
                do
                    checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "checkpoint", locationTable['offset'], locationTable['id'])
                    -- print(loc_id..":"..tostring(checks[loc_id]))
                end
            end
        end
    return checks
end

function switch_check()
    local checks = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["SWITCH"] ~= nil
            then
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["SWITCH"])
                do
                    checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "switch", locationTable['offset'], locationTable['id'])
                    -- print(loc_id..":"..tostring(checks[loc_id]))
                end
            end
        end
    return checks
end

function tip_check()
    local checks = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["TIP"] ~= nil
            then
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["TIP"])
                do
                    checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "tip", locationTable['offset'], locationTable['id'])
                    -- print(loc_id..":"..tostring(checks[loc_id]))
                end
            end
        end
    return checks
end

function enemy_check()
    local checks = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["ENEMIES"] ~= nil
            then
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["ENEMIES"])
                do
                    checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "enemy", locationTable['offset'], locationTable['id'])
                    -- print(loc_id..":"..tostring(checks[loc_id]))
                end
            end
        end
    return checks
end

function potion_check()
    local checks = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["POTIONS"] ~= nil
            then
                for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["POTIONS"])
                do
                    checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "potion", locationTable['offset'], locationTable['id'])
                    -- print(loc_id..":"..tostring(checks[loc_id]))
                end
            end
        end
    return checks
end

function goal_check()
    local check = {}
        if ADDRESS_MAP[WORLD_NAME] ~= nil
        then
            if ADDRESS_MAP[WORLD_NAME]["GOAL"] ~= nil
            then
    			local hackPointerIndex = GEXHACK:dereferencePointer(GVR.base_pointer);
    			local world_address = hackPointerIndex + GVR:getWorldOffset(WORLD_ID)
				local goal_address = world_address + GVR.goal
    			local check_value = mainmemory.readbyte(goal_address)
    			check[ADDRESS_MAP[WORLD_NAME]["GOAL"]] = check_value ~= 0x0
			end
		end
	return check
end

function received_garibs(itemId)
    --Decoupled Garib Groups and Garibsanity
	if 6510000 <= itemId and itemId <= 6519999 then
		updateDecoupledGaribs(itemId - 6510000)
    elseif 6520000 <= itemId and itemId <= 6529999 then
		--Level Garibsanity
		--Index of the world the garibs coming from
		GARIB_WORLD_INDEX = getDigit(itemId, 2) * 5
		--Index of the level the garibs coming from
		GARIB_LEVEL_INDEX = itemId % 10
		--Name of the specific garibs
		GARIB_WORLD_NAME = ROM_WORLDS_TABLE[GARIB_WORLD_INDEX + GARIB_LEVEL_INDEX] .. "_GARIBS"
        TOTAL_WORLD_GARIBS[GARIB_WORLD_NAME] = TOTAL_WORLD_GARIBS[GARIB_WORLD_NAME] + 1
        GVR:setItem(ITEM_TABLE[GARIB_WORLD_NAME], TOTAL_WORLD_GARIBS[GARIB_WORLD_NAME])
	elseif 6530000 <= itemId and itemId <= 6539999 then
		--Level Garib Groups
		--Index of the world the garibs coming from
		GARIB_WORLD_INDEX = getDigit(itemId, 4) * 5
		--Index of the level the garibs coming from
		GARIB_LEVEL_INDEX = getDigit(itemId, 3)
		--Name of the specific garibs
		GARIB_WORLD_NAME = ROM_WORLDS_TABLE[GARIB_WORLD_INDEX + GARIB_LEVEL_INDEX] .. "_GARIBS"
		--Amount the garibs increase by
		TOTAL_ADDED_GARIBS = itemId % 100
		--Apply it
		TOTAL_WORLD_GARIBS[GARIB_WORLD_NAME] = TOTAL_WORLD_GARIBS[GARIB_WORLD_NAME] + TOTAL_ADDED_GARIBS
		GVR:setItem(ITEM_TABLE[GARIB_WORLD_NAME], TOTAL_WORLD_GARIBS[GARIB_WORLD_NAME])
	end
end

function updateDecoupledGaribs(incoming_garibs)
	TOTAL_SINGLE_GARIBS = TOTAL_SINGLE_GARIBS + incoming_garibs
	-- How many garibs are left to fill into worlds
	local garib_fill_counter = TOTAL_SINGLE_GARIBS
	-- What garib level index you are at
	local garib_level_index = 0
	while garib_fill_counter > 0 do
		-- If you have less garibs than the total needed to fill the world
		local garib_world = GARIB_ORDER[tostring(garib_level_index)]
		if garib_world == nil
		then
			-- If you're out of worlds, don't fill anything else
			garib_fill_counter = 0
		else
			-- If you have more garibs than the max of this world
			if garib_fill_counter > MAX_WORLD_GARIBS[garib_world]
			then
				-- Set it to the max and go to the next garib level
				garib_fill_counter = garib_fill_counter - MAX_WORLD_GARIBS[garib_world]
				TOTAL_WORLD_GARIBS[garib_world] = MAX_WORLD_GARIBS[garib_world]
				GVR:setItem(ITEM_TABLE[garib_world], TOTAL_WORLD_GARIBS[garib_world])
				garib_level_index = garib_level_index + 1
			else
				-- Otherwise, the remaining garibs go to this world
				TOTAL_WORLD_GARIBS[garib_world] = garib_fill_counter
				GVR:setItem(ITEM_TABLE[garib_world], TOTAL_WORLD_GARIBS[garib_world])
				garib_fill_counter = 0
			end
		end
	end
end

function received_moves(itemId)
    if itemId == 6500329 then
        GVR:setItem(ITEM_TABLE["AP_JUMP"], 1)
    elseif itemId == 6500330 then
        GVR:setItem(ITEM_TABLE["AP_CARTWHEEL"], 1)
    elseif itemId == 6500331 then
        GVR:setItem(ITEM_TABLE["AP_CRAWL"], 1)
    elseif itemId == 6500332 then
        GVR:setItem(ITEM_TABLE["AP_DOUBLE_JUMP"], 1)
    elseif itemId == 6500333 then
        GVR:setItem(ITEM_TABLE["AP_FISTSLAM"], 1)
    elseif itemId == 6500334 then
        GVR:setItem(ITEM_TABLE["AP_LEDGEGRAB"], 1)
    elseif itemId == 6500335 then
        GVR:setItem(ITEM_TABLE["AP_PUSH"], 1)
    elseif itemId == 6500336 then
        GVR:setItem(ITEM_TABLE["AP_LOCATE_GARIB"], 1)
    elseif itemId == 6500337 then
        GVR:setItem(ITEM_TABLE["AP_LOCATE_BALL"], 1)
    elseif itemId == 6500338 then
        GVR:setItem(ITEM_TABLE["AP_DRIBBLE"], 1)
    elseif itemId == 6500339 then
        GVR:setItem(ITEM_TABLE["AP_QUICKSWAP"], 1)
    elseif itemId == 6500340 then
        GVR:setItem(ITEM_TABLE["AP_SLAP"], 1)
    elseif itemId == 6500341 then
        GVR:setItem(ITEM_TABLE["AP_THROW"], 1)
    elseif itemId == 6500342 then
        GVR:setItem(ITEM_TABLE["AP_TOSS"], 1)
    --elseif itemId == 6500343 then
    --    GVR:setItem(ITEM_TABLE["AP_BEACHBALL_POTION"], 1)
    --elseif itemId == 6500344 then
    --    GVR:setItem(ITEM_TABLE["AP_DEATH_POTION"], 1)
    --elseif itemId == 6500345 then
    --    GVR:setItem(ITEM_TABLE["AP_HELICOPTER_POTION"], 1)
    --elseif itemId == 6500346 then
    --    GVR:setItem(ITEM_TABLE["AP_FROG_POTION"], 1)
    --elseif itemId == 6500347 then
    --    GVR:setItem(ITEM_TABLE["AP_BOOMERANG_POTION"], 1)
    elseif itemId == 6500348 then
        GVR:setItem(ITEM_TABLE["AP_SPEED_POTION"], 1)
    elseif itemId == 6500349 then
        GVR:setItem(ITEM_TABLE["AP_STICKY_POTION"], 1)
    elseif itemId == 6500350 then
        GVR:setItem(ITEM_TABLE["AP_HERCULES_POTION"], 1)
    --elseif itemId == 6500351 then
    --    GVR:setItem(ITEM_TABLE["AP_GRAB"], 1)
    elseif itemId == 6500352 then
        GVR:setItem(ITEM_TABLE["AP_RUBBER_BALL"], 1)
    elseif itemId == 6500353 then
        GVR:setItem(ITEM_TABLE["AP_BOWLING_BALL"], 1)
    elseif itemId == 6500354 then
        GVR:setItem(ITEM_TABLE["AP_BEARING_BALL"], 1)
    elseif itemId == 6500355 then
        GVR:setItem(ITEM_TABLE["AP_CRYSTAL_BALL"], 1)
    elseif itemId == 6500356 then
        GVR:setItem(ITEM_TABLE["AP_POWER_BALL"], 1)
    end
end

function received_misc(itemId)
    --if itemId == 6500358 then
    --    GVR:setItem(ITEM_TABLE["AP_CHICKEN_SOUND"], TOTAL_LIVES)
    if itemId == 6500359 then
        TOTAL_LIVES = TOTAL_LIVES + 1
        GVR:setItem(ITEM_TABLE["AP_LIFE_UP"], TOTAL_LIVES)
    --elseif itemId == 6500360 then
    --    GVR:setItem(ITEM_TABLE["AP_BOOMERANG_SPELL"], TOTAL_LIVES)
    --elseif itemId == 6500361 then
    --    GVR:setItem(ITEM_TABLE["AP_BEACHBALL_SPELL"], TOTAL_LIVES)
    --elseif itemId == 6500362 then
    --    GVR:setItem(ITEM_TABLE["AP_HERCULES_SPELL"], TOTAL_LIVES)
    --elseif itemId == 6500363 then
    --    GVR:setItem(ITEM_TABLE["AP_HELICOPTER_SPELL"], TOTAL_LIVES)
    --elseif itemId == 6500364 then
    --    GVR:setItem(ITEM_TABLE["AP_SPEED_SPELL"], TOTAL_LIVES)
    --elseif itemId == 6500365 then
    --    GVR:setItem(ITEM_TABLE["AP_FROG_SPELL"], TOTAL_LIVES)
    --elseif itemId == 6500366 then
    --    GVR:setItem(ITEM_TABLE["AP_DEATH_SPELL"], TOTAL_LIVES)
    --elseif itemId == 6500367 then
    --    GVR:setItem(ITEM_TABLE["AP_STICKY_SPELL"], TOTAL_LIVES)
    end
end

function received_traps(itemId)
	--if itemId == 6500368 then
    --    GVR:setItem(ITEM_TABLE["Frog Trap"], TOTAL_LIVES)
    --elseif itemId == 6500369 then
    --    GVR:setItem(ITEM_TABLE["Cursed Ball Trap"], TOTAL_LIVES)
    --elseif itemId == 6500370 then
    --    GVR:setItem(ITEM_TABLE["Instant Crystal Trap"], TOTAL_LIVES)
    --elseif itemId == 6500371 then
    --    GVR:setItem(ITEM_TABLE["Camera Rotate Trap"], TOTAL_LIVES)
    --elseif itemId == 6500372 then
    --    GVR:setItem(ITEM_TABLE["Tip Trap"], TOTAL_LIVES)
    --end
end

function received_events(itemId)
    if itemId == 6500009 then
        GVR:setItem(ITEM_TABLE["AP_ATLANTIS_L1_GATE"], 1)
    elseif itemId == 6500010 then
        GVR:setItem(ITEM_TABLE["AP_ATLANTIS_L2_RAISE_WATER"], 1)
    elseif itemId == 6500011 then
        GVR:setItem(ITEM_TABLE["AP_ATLANTIS_L2_WATER_DRAIN"], 1)
    elseif itemId == 6500012 then
        GVR:setItem(ITEM_TABLE["AP_ATLANTIS_L2_GATE"], 1)
    elseif itemId == 6500013 then
        GVR:setItem(ITEM_TABLE["AP_ATLANTIS_L3_SPIN_WHEEL"], 1)
    elseif itemId == 6500014 then
        GVR:setItem(ITEM_TABLE["AP_ATLANTIS_L3_CAVE"], 1)
	elseif itemId == 6500024 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L1_ELEVATOR"], 1)
	elseif itemId == 6500025 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L1_GATE"], 1)
	elseif itemId == 6500026 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L1_DOOR_A"], 1)
	elseif itemId == 6500027 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L1_DOOR_B"], 1)
	elseif itemId == 6500028 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L1_DOOR_C"], 1)
	elseif itemId == 6500029 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L1_ROCKET_1"], 1)
	elseif itemId == 6500030 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L1_ROCKET_2"], 1)
	elseif itemId == 6500031 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L1_ROCKET_3"], 1)
	elseif itemId == 6500032 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L2_DROP_GARIBS"], 1)
	elseif itemId == 6500033 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L2_FAN"], 1)
	elseif itemId == 6500034 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L3_SPIN_DOOR"], 1)
	elseif itemId == 6500035 then
	    GVR:setItem(ITEM_TABLE["AP_CARNIVAL_L3_HANDS"], 1)
	elseif itemId == 6500045 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L1_RAISE_BEACH"], 1)
	elseif itemId == 6500046 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L1_ELEVATOR"], 1)
	elseif itemId == 6500047 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L1_CHEST"], 1)
	elseif itemId == 6500048 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L1_SANDPILE"], 1)
	elseif itemId == 6500049 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L1_WATERSPOUT"], 1)
	elseif itemId == 6500050 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L1_LIGHTHOUSE"], 1)
	elseif itemId == 6500051 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L1_RAISE_SHIP"], 1)
	elseif itemId == 6500052 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L1_BRIDGE"], 1)
	elseif itemId == 6500053 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L2_LOWER_WATER"], 1)
	elseif itemId == 6500054 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L2_RAMP"], 1)
	elseif itemId == 6500055 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L2_GATE"], 1)
	elseif itemId == 6500056 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L3_PLATFORM_SPIN"], 1)
	elseif itemId == 6500057 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L3_TRAMPOLINE"], 1)
	elseif itemId == 6500058 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L3_STAIRS"], 1)
	elseif itemId == 6500059 then
	    GVR:setItem(ITEM_TABLE["AP_PIRATES_L3_ELEVATOR"], 1)
	elseif itemId == 6500069 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L1_LIFE_DROP"], 1)
	elseif itemId == 6500070 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L2_PLATFORM_1"], 1)
	elseif itemId == 6500071 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L2_PLATFORM_2"], 1)
	elseif itemId == 6500072 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L2_LOWER_BALL_SWITCH"], 1)
	elseif itemId == 6500073 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_DROP_GARIBS"], 1)
	elseif itemId == 6500074 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_SPIN_STONES"], 1)
	elseif itemId == 6500075 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH_1"], 1)
	elseif itemId == 6500076 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH_2"], 1)
	elseif itemId == 6500077 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH_3"], 1)
	elseif itemId == 6500078 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_PROGRESSIVE_LOWER_MONOLITH_4"], 1)
	elseif itemId == 6500079 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_FLOATING_PLATFORMS"], 1)
	elseif itemId == 6500089 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_LAVA_SPINNING"], 1)
	elseif itemId == 6500081 then
	    GVR:setItem(ITEM_TABLE["AP_PREHISTORIC_L3_DIRT_ELEVATOR"], 1)
	elseif itemId == 6500091 then
	    GVR:setItem(ITEM_TABLE["AP_FORTRESS_L1_COFFIN"], 1)
	elseif itemId == 6500092 then
	    GVR:setItem(ITEM_TABLE["AP_FORTRESS_L1_DOORWAY"], 1)
	elseif itemId == 6500093 then
	    GVR:setItem(ITEM_TABLE["AP_FORTRESS_L1_DRAWBRIDGE"], 1)
	elseif itemId == 6500094 then
	    GVR:setItem(ITEM_TABLE["AP_FORTRESS_L2_GARIBS_FALL"], 1)
	elseif itemId == 6500095 then
	    GVR:setItem(ITEM_TABLE["AP_FORTRESS_L2_CHECKPOINT_GATES"], 1)
	elseif itemId == 6500096 then
	    GVR:setItem(ITEM_TABLE["AP_FORTRESS_L2_MUMMY_GATE"], 1)
	elseif itemId == 6500097 then
	    GVR:setItem(ITEM_TABLE["AP_FORTRESS_L3_GATE"], 1)
	elseif itemId == 6500098 then
	    GVR:setItem(ITEM_TABLE["AP_FORTRESS_L3_SPIKES"], 1)
	elseif itemId == 6500108 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L1_ALIENS"], 1)
	elseif itemId == 6500109 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L1_FANS"], 1)
	elseif itemId == 6500110 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L1_FLYING_PLATFORMS"], 1)
	elseif itemId == 6500111 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L1_GOO_PLATFORMS"], 1)
	elseif itemId == 6500112 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L1_UFO"], 1)
	elseif itemId == 6500113 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L1_MISSILE"], 1)
	elseif itemId == 6500114 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L2_MASHERS"], 1)
	elseif itemId == 6500115 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L2_RAMP"], 1)
	elseif itemId == 6500116 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L3_HAZARD_GATE"], 1)
	elseif itemId == 6500117 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L3_SIGN"], 1)
	elseif itemId == 6500118 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L3_FAN"], 1)
	elseif itemId == 6500119 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L3_BRIDGE"], 1)
	elseif itemId == 6500120 then
	    GVR:setItem(ITEM_TABLE["AP_SPACE_L3_GLASS_GATE"], 1)
	elseif itemId == 6500127 then
	    GVR:setItem(ITEM_TABLE["AP_TRAINING_WORLD_SANDPIT"], 1)
	elseif itemId == 6500128 then
	    GVR:setItem(ITEM_TABLE["AP_TRAINING_WORLD_LOWER_TARGET"], 1)
	elseif itemId == 6500129 then
	    GVR:setItem(ITEM_TABLE["AP_TRAINING_WORLD_STAIRS"], 1)
    end
end

---------------------------------- MAP FUNCTIONS -----------------------------------

function set_map(map)
    WORLD_ID = WORLDS_TABLE[map]
    WORLD_NAME = map
end

function map_handler()
    if CURRENT_MAP == 0x09 then
        set_map("AP_TRAINING_WORLD")
    elseif CURRENT_MAP == 0x0A then
        set_map("AP_ATLANTIS_L1")
    elseif CURRENT_MAP == 0x0B then
        set_map("AP_ATLANTIS_L2")
    elseif CURRENT_MAP == 0x0C then
        set_map("AP_ATLANTIS_L3")
    elseif CURRENT_MAP == 0x0D then
        set_map("AP_ATLANTIS_BOSS")
    elseif CURRENT_MAP == 0x0E then
        set_map("AP_ATLANTIS_BONUS")

    elseif CURRENT_MAP == 0x0F then
        set_map("AP_CARNIVAL_L1")
    elseif CURRENT_MAP == 0x10 then
        set_map("AP_CARNIVAL_L2")
    elseif CURRENT_MAP == 0x11 then
        set_map("AP_CARNIVAL_L3")
    elseif CURRENT_MAP == 0x12 then
        set_map("AP_CARNIVAL_BOSS")
    elseif CURRENT_MAP == 0x13 then
        set_map("AP_CARNIVAL_BONUS")
    
    elseif CURRENT_MAP == 0x14 then
        set_map("AP_PIRATES_L1")
    elseif CURRENT_MAP == 0x15 then
        set_map("AP_PIRATES_L2")
    elseif CURRENT_MAP == 0x16 then
        set_map("AP_PIRATES_L3")
    elseif CURRENT_MAP == 0x17 then
        set_map("AP_PIRATES_BOSS")
    elseif CURRENT_MAP == 0x18 then
        set_map("AP_PIRATES_BONUS")

    elseif CURRENT_MAP == 0x19 then
        set_map("AP_PREHISTOIC_L1")
    elseif CURRENT_MAP == 0x1A then
        set_map("AP_PREHISTOIC_L2")
    elseif CURRENT_MAP == 0x1B then
        set_map("AP_PREHISTOIC_L3")
    elseif CURRENT_MAP == 0x1C then
        set_map("AP_PREHISTOIC_BOSS")
    elseif CURRENT_MAP == 0x1D then
        set_map("AP_PREHISTOIC_BONUS")

    elseif CURRENT_MAP == 0x1E then
        set_map("AP_FORTRESS_L1")
    elseif CURRENT_MAP == 0x1F then
        set_map("AP_FORTRESS_L2")
    elseif CURRENT_MAP == 0x20 then
        set_map("AP_FORTRESS_L3")
    elseif CURRENT_MAP == 0x21 then
        set_map("AP_FORTRESS_BOSS")
    elseif CURRENT_MAP == 0x22 then
        set_map("AP_FORTRESS_BONUS")

    elseif CURRENT_MAP == 0x23 then
        set_map("AP_SPACE_L1")
    elseif CURRENT_MAP == 0x24 then
        set_map("AP_SPACE_L2")
    elseif CURRENT_MAP == 0x25 then
        set_map("AP_SPACE_L3")
    elseif CURRENT_MAP == 0x26 then
        set_map("AP_SPACE_BOSS")
    elseif CURRENT_MAP == 0x29 then
        set_map("AP_SPACE_BONUS")
    end
end

function setRandomizedWorlds(WORLD_LOOKUP)
	for world_names, loading_zone_info in pairs(WORLD_LOOKUP)
	do
		local hub_number = getDigit(loading_zone_info, 2)
		local door_number = loading_zone_info % 10
		local world_id = WORLDS_TABLE[world_names]
		if world_id == nil
		then
			print("!" .. world_names .. "!")
		end
		setWorldInfo(world_id, hub_number, door_number)
	end
end

function setWorldInfo(world_id, hub_number, door_number)
    local hackPointerIndex = GEXHACK:dereferencePointer(GEXHACK.base_pointer);
    local world_address = hackPointerIndex + GEXHACK:getWorldOffset(world_id)
	local hub_address = world_address + GEXHACK.hub_entrance
	local door_address = world_address + GEXHACK.door_number
	mainmemory.writebyte(hub_address, hub_number)
	mainmemory.writebyte(door_address, door_number)
end

---------------------- ARCHIPELAGO FUNCTIONS -------------

function processAGIItem(item_list)
    for ap_id, memlocation in pairs(item_list) -- Items unrelated to AGI_MAP like Consumables
    do
        -- print(receive_map)
        if receive_map[tostring(ap_id)] == nil
        then
            if(6510000 <= memlocation and memlocation <= 6539999) -- Garibs
            then
                received_garibs(memlocation)
            elseif(6500190 <= memlocation and memlocation <= 6501906) -- Moves and Balls
            then
                received_moves(memlocation)
            elseif(6500358 <= memlocation and memlocation <= 6500367) -- Misc
            then
                received_misc(memlocation)
            elseif(6500368 <= memlocation and memlocation <= 6500372) -- Traps
            then
                received_traps(memlocation)
            elseif(6500000 <= memlocation and memlocation <= 6500129) -- Events
            then
                received_events(memlocation)
            end
            receive_map[tostring(ap_id)] = tostring(memlocation)
        end
    end
end

function flagCheckedLocations(location_list)
	for ap_id, memlocation in pairs(location_list)
	do
		-- Update any checked locations to be remembered
		if checked_map[tostring(ap_id)] == nil
		then
			--
			print("AP ID: " .. tostring(ap_id))
			print("Memlocation: " .. tostring(memlocation))
			--
        	checked_map[tostring(ap_id)] = tostring(memlocation)
		end
	end
end

function process_block(block)
    -- Sometimes the block is nothing, if this is the case then quietly stop processing
    if block == nil then
        return
    end
    if block['slot_player'] ~= nil
    then
        return
    end
    if next(block['items']) ~= nil
    then
        processAGIItem(block['items'])
    end
	if block['triggerDeath'] ~= nil
	then
    	if block['triggerDeath'] == true and DEATH_LINK == true
    	then
    	    local death = GVR:getPCDeath()
    	    GVR:setPCDeath(death + 1)
    	end
	end
    if block['triggerTag'] ~= nil
	then
		if block['triggerTag'] == true and TAG_LINK == true
    	then
    	    local tag = GVR:getPCTag()
    	    GVR:setPCTag(tag + 1)
    	end
	end
end

function SendToClient()
    local retTable = {}
    local detect_death = false
    local detect_tag = false
	local deathAp = GVR:getPCDeath()
	local death64 = GVR:getNLocalDeath()
	-- Send the deathlink only when you're the cause
    if death64 > deathAp
    then
		if DEATH_LINK == true
		then
			if DEATH_LINK_TRIGGERED == false
			then
				detect_death = true
            	GVR:setPCDeath(deathAp + 1)
            	DEATH_LINK_TRIGGERED = true
			end
		else
			DEATH_LINK_TRIGGERED = false
            local died = GVR:getPCDeath()
            GVR:setPCDeath(died + 1)
		end
    else
        DEATH_LINK_TRIGGERED = false
    end

	
    if GVR:getPCTag() ~= GVR:getNLocalTag()
    then
		if TAG_LINK == true
		then
			if TAG_LINK_TRIGGERED == false
			then
        		detect_tag = true
        		local tag = GVR:getPCTag()
        		GVR:setPCTag(tag + 1)
        		TAG_LINK_TRIGGERED = true
			else
        		TAG_LINK_TRIGGERED = false
			end
		else
        	local tag = GVR:getPCTag()
        	GVR:setPCTag(tag + 1)
        	TAG_LINK_TRIGGERED = false
		end
	else
        TAG_LINK_TRIGGERED = false
    end
    retTable["scriptVersion"] = SCRIPT_VERSION;
    retTable["playerName"] = PLAYER;
    retTable["deathlinkActive"] = DEATH_LINK;
    retTable["taglinkActive"] = TAG_LINK;
    retTable["isDead"] = detect_death;
    retTable["isTag"] = detect_tag;
    retTable["garibs"] = garib_check()
    retTable["garib_groups"] =  garib_group_contruction()
    retTable["life"] = life_check()
    retTable["tip"] = tip_check()
    retTable["checkpoint"] = checkpoint_check()
    retTable["switch"] = switch_check()
    retTable["enemy_garibs"] = enemy_garib_check()
    retTable["enemy"] = enemy_check()
    retTable["potions"] = potion_check()
	retTable["goal"] = goal_check()

    retTable["DEMO"] = false;
    retTable["sync_ready"] = "true"

    if CURRENT_MAP == nil
    then
        retTable["gex_world"] = 0x0;
        retTable["gex_hub"] = 0x0D;
    else
        retTable["gex_world"] = CURRENT_MAP;
        retTable["gex_hub"] = CURRENT_HUB;
    end

    local msg = json.encode(retTable).."\n"
    local ret, error = GLV_SOCK:send(msg)
    if ret == nil then
        print(error)
    elseif CUR_STATE == STATE_INITIAL_CONNECTION_MADE then
        CUR_STATE = STATE_TENTATIVELY_CONNECTED
    elseif CUR_STATE == STATE_TENTATIVELY_CONNECTED then
        print("Connected!")
        PRINT_GOAL = true;
        CUR_STATE = STATE_OK
    end
end

function receive()
    if PLAYER == "" and SEED == 0
    then
        getSlotData()
		GVR:setDeathlinkEnabled(true)
    	GVR:setTaglinkEnabled(true)
    else
        -- Send the message
        SendToClient()

        l, e = GLV_SOCK:receive()
        -- Handle incoming message
        if e == 'closed' then
            if CUR_STATE == STATE_OK then
                print("Connection closed")
            end
            CUR_STATE = STATE_UNINITIALIZED
            return
        elseif e == 'timeout' then
            AP_TIMEOUT_COUNTER = AP_TIMEOUT_COUNTER + 1
            if AP_TIMEOUT_COUNTER == 5
            then
                AP_TIMEOUT_COUNTER = 0
            end
            print("timeout")
            return
        elseif e ~= nil then
            -- print(e)
            CUR_STATE = STATE_UNINITIALIZED
            return
        end
        AP_TIMEOUT_COUNTER = 0
        process_block(json.decode(l))
    end
end

function getSlotData()
    local retTable = {}
    retTable["getSlot"] = true;
    local msg = json.encode(retTable).."\n"
    local ret, error = GLV_SOCK:send(msg)
    l, e = GLV_SOCK:receive()
    -- Handle incoming message
    if e == 'closed' then
        if CUR_STATE == STATE_OK then
            print("Connection closed")
        end
        CUR_STATE = STATE_UNINITIALIZED
        return
    elseif e == 'timeout' then
        AP_TIMEOUT_COUNTER = AP_TIMEOUT_COUNTER + 1
        if AP_TIMEOUT_COUNTER == 10
        then
            AP_TIMEOUT_COUNTER = 0
        end
        print("timeout")
        return
    elseif e ~= nil then
        -- print(e)
        CUR_STATE = STATE_UNINITIALIZED
        return
    end
    AP_TIMEOUT_COUNTER = 0
    process_slot(json.decode(l))
end

function process_slot(block)
    if block['slot_player'] ~= nil and block['slot_player'] ~= ""
    then
        PLAYER = block['slot_player']
    end
    if block['slot_seed'] ~= nil and block['slot_seed'] ~= ""
    then
        SEED = block['slot_seed']
    end
    if block['slot_garib_logic'] ~= nil
    then
        GVR:setGaribLogic(block['slot_garib_logic'])
        if block['slot_garib_logic'] == 1
        then
            GARIB_GROUPS = true
        end
    end
    --if block['slot_garib_sorting'] ~= nil
    --then
    --    GVR:setGaribSorting(block['slot_garib_sorting'])
    --end
	if block['slot_garib_order'] ~= nil
	then
		GARIB_ORDER = block['slot_garib_order']
	end
	if block['slot_world_lookup'] ~= nil
	then
		setRandomizedWorlds(block['slot_world_lookup'])
	end
    if block['slot_switches'] ~= nil and block['slot_switches'] ~= 0
    then
        GVR:setRandomizeSwitches(block['slot_switches'])
    end
    -- if block['slot_checkpoints'] ~= nil and block['slot_checkpoints'] ~= 0
    -- then
    --     GVR:setRandomizeCheckpoint(block['slot_checkpoints'])
    -- end
	if block['checkedLocations'] ~= nil then
		flagCheckedLocations(block['checkedLocations'])
	end
    if block['slot_version'] ~= nil and block['slot_version'] ~= ""
    then
        CLIENT_VERSION = block['slot_version']
        if CLIENT_VERSION ~= GVR_VERSION
        then
            VERROR = true
            return false
        end
        local checked = false
        while(checked == false)
        do
            local ROMversion = GVR:getRomVersion()
            if ROMversion ~= "0"
            then
                if ROMversion ~= CLIENT_VERSION
                then
                    VERROR = true
                    return false
                end
                checked = true
            end
            emu.frameadvance()
        end
    end
    return true
end

function getDigit(number, digit)
	return number % (10^digit) // (10^(digit - 1))
end

---------------------- MAIN LUA LOOP -------------------------

function main()
    local bizhawk_version = client.getversion()
    local bizhawk_major, bizhawk_minor, bizhawk_patch = bizhawk_version:match("(%d+)%.(%d+)%.?(%d*)")
    bizhawk_major = tonumber(bizhawk_major)
    bizhawk_minor = tonumber(bizhawk_minor)
    if bizhawk_major == 2 and bizhawk_minor <= 9
    then
        print("We only support Bizhawk Version 2.10 and newer. Please download Bizhawk version 2.10")
        return
    end
    print("gex Archipelago Version " .. GVR_VERSION)
    GVR = GEXHACK:new(nil)
    local check = 0
    while GEXHACK:getSettingPointer() == nil
    do
        check = check + 1
        if(check == 275 and GVR:getRomVersion() == "0")
        then
            print("This is the vanilla rom. Please use the patched version of gex-AP.")
            return
        end
        emu.frameadvance()
    end
    server, error = socket.bind('localhost', 21223)
    local changed_map = 0x0
    while true do
        FRAME = FRAME + 1
        if not (CUR_STATE == PREV_STATE) then
            PREV_STATE = CUR_STATE
        end
        if (CUR_STATE == STATE_OK) or (CUR_STATE == STATE_INITIAL_CONNECTION_MADE) or (CUR_STATE == STATE_TENTATIVELY_CONNECTED) then
            if (FRAME % 30 == 1) then
                CURRENT_MAP = GVR:getWorldMap()
                CURRENT_HUB = GVR:getHubMap()
                map_handler();
                receive();
                --messageQueue();
                if VERROR == true
                then
                    print("ERROR: version mismatch. Please obtain the same version for everything")
                    print("The versions that you are currently using are:")
                    print("Connector Version: " .. GVR_VERSION)
                    print("Client Version: " .. CLIENT_VERSION)
                    print("ROM Version: " .. GVR:getRomVersion())
                    return
                end
                if changed_map ~= CURRENT_MAP
                then
                    client.saveram()
                    changed_map = CURRENT_MAP
                end
            end
        elseif (CUR_STATE == STATE_UNINITIALIZED) then
            if  (FRAME % 60 == 1) then
                server:settimeout(0)
                local client, timeout = server:accept()
                if timeout == nil then
                    print('Initial Connection Made')
                    CUR_STATE = STATE_INITIAL_CONNECTION_MADE
                    GLV_SOCK = client
                    GLV_SOCK:settimeout(0)
                end
            end
        end
        emu.frameadvance()
    end
end

main()
