-- gex Connector Lua
-- Created by Chris Jackson (HemiJackson/Rubedo12212)

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


-------------- TOTALS VARS -----------
local TOTAL_LIVES = 0;

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
    "AP_RED_REMOTE",
    "AP_SILVER_REMOTE",
    "AP_GOLD_REMOTE",
    "AP_MAX_ITEM"
};

for index, item in pairs(ROM_ITEM_TABLE)
do
    ITEM_TABLE[item] = index - 1
end



-- Address Map for GEX
local ADDRESS_MAP = {
	
}

GEXHACK = {
    RDRAMBase = 0x80000000,
    RDRAMSize = 0x800000,

    BASE_POINTER = 0x400000,
    PC = 0x0,
    ITEMS_COUNTS = 0x0,
    ROM_MAJOR_VERSION = 0x4,
    ROM_MINOR_VERSION = 0x6,
    ROM_PATCH_VERSION = 0x7,
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

function GEXHACK:getSettingPointer()
    local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    if hackPointerIndex == nil
    then
        return
    end
	return self.settings + hackPointerIndex;
end


-- function GEXHACK:setRandomizeSwitches(switch)
--     mainmemory.writebyte(self.randomize_switches + GEXHACK:getSettingPointer(), switch);
-- end

-- function GEXHACK:setRandomizeCheckpoint(checkpoint)
--     mainmemory.writebyte(self.randomize_checkpoints + GEXHACK:getSettingPointer(), checkpoint);
-- end

function GEXHACK:setDeathlinkEnabled(newState)
	if newState
	then
		mainmemory.writebyte(self.deathlink + GEXHACK:getSettingPointer(), 1);
	else
		mainmemory.writebyte(self.deathlink + GEXHACK:getSettingPointer(), 0);
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

function GEXHACK:setItem(index, value)
    mainmemory.writebyte(index + self:getItemsPointer(), value);
end

-- function GEXHACK:getWorldMap()
--     local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
--     if hackPointerIndex == nil
--     then
--         return 0x0
--     end
--     return mainmemory.readbyte(hackPointerIndex + self.world_map)
-- end

-- function GEXHACK:getHubMap()
--     local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
--     if hackPointerIndex == nil
--     then
--         return 0x0
--     end
--     return mainmemory.readbyte(hackPointerIndex + self.hub_map)
-- end

function GEXHACK:getPCDeath()
	local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    return mainmemory.readbyte(hackPointerIndex + self.pc_deathlink);
end


function GEXHACK:setPCDeath(DEATH_COUNT)
	local hackPointerIndex = GEXHACK:dereferencePointer(self.base_pointer);
    mainmemory.writebyte(hackPointerIndex + self.pc_deathlink, DEATH_COUNT);
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


-- function life_check()
--     local checks = {}
--         if ADDRESS_MAP[WORLD_NAME] ~= nil
--         then
--             if ADDRESS_MAP[WORLD_NAME]["LIFE"] ~= nil
--             then
--                 for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["LIFE"])
--                 do
--                     checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "life", locationTable['offset'], locationTable['id'])
--                     -- print(loc_id..":"..tostring(checks[loc_id]))
--                 end
--             end
--         end
--     return checks
-- end

-- function checkpoint_check()
--     local checks = {}
--         if ADDRESS_MAP[WORLD_NAME] ~= nil
--         then
--             if ADDRESS_MAP[WORLD_NAME]["CHECKPOINT"] ~= nil
--             then
--                 for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["CHECKPOINT"])
--                 do
--                     checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "checkpoint", locationTable['offset'], locationTable['id'])
--                     -- print(loc_id..":"..tostring(checks[loc_id]))
--                 end
--             end
--         end
--     return checks
-- end

-- function tip_check()
--     local checks = {}
--         if ADDRESS_MAP[WORLD_NAME] ~= nil
--         then
--             if ADDRESS_MAP[WORLD_NAME]["TIP"] ~= nil
--             then
--                 for loc_id,locationTable in pairs(ADDRESS_MAP[WORLD_NAME]["TIP"])
--                 do
--                     checks[loc_id] = GVR:checkLocationFlag(WORLD_ID, "tip", locationTable['offset'], locationTable['id'])
--                     -- print(loc_id..":"..tostring(checks[loc_id]))
--                 end
--             end
--         end
--     return checks
-- end


-- function goal_check()
--     local check = {}
--         if ADDRESS_MAP[WORLD_NAME] ~= nil
--         then
--             if ADDRESS_MAP[WORLD_NAME]["GOAL"] ~= nil
--             then
--     			local hackPointerIndex = GEXHACK:dereferencePointer(GVR.base_pointer);
--     			local world_address = hackPointerIndex + GVR:getWorldOffset(WORLD_ID)
-- 				local goal_address = world_address + GVR.goal
--     			local check_value = mainmemory.readbyte(goal_address)
--     			check[ADDRESS_MAP[WORLD_NAME]["GOAL"]] = check_value ~= 0x0
-- 			end
-- 		end
-- 	return check
-- end


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


---------------------- ARCHIPELAGO FUNCTIONS -------------

function processAGIItem(item_list)
    for ap_id, memlocation in pairs(item_list) -- Items unrelated to AGI_MAP like Consumables
    do
        -- print(receive_map)
        if receive_map[tostring(ap_id)] == nil
        then
            if(12201 == memlocation and memlocation <= 12206) -- Garibs
            then
                received_remote(memlocation)
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

    retTable["DEMO"] = false;
    retTable["sync_ready"] = "true"

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
    --if block['slot_garib_sorting'] ~= nil
    --then
    --    GVR:setGaribSorting(block['slot_garib_sorting'])
    --end
	
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
