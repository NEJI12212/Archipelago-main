from math import ceil, floor
import random
from multiprocessing import Process
from Options import DeathLink, OptionError
import settings
import typing
from typing import Dict, Any, Optional, List
import warnings
from dataclasses import asdict

from .Items import GexItem, ItemData, all_item_table, all_group_table
from .Locations import GexLocation, LocationData, all_location_table
from .Regions import create_regions, connect_regions
from .Options import GexOptions
from .Rules import GexRules
from .Names import itemName, locationName, regionName

#from Utils import get_options
from BaseClasses import ItemClassification, Tutorial, Item, Region, MultiWorld
#from Fill import fill_restrictive
from worlds.AutoWorld import World, WebWorld
from worlds.LauncherComponents import Component, components, Type, launch_subprocess


def run_client():
    from .GClient import main  # lazy import
    launch_subprocess(main)

components.append(Component("Gex Client", func=run_client, component_type=Type.CLIENT))

#NOTE! For Backward Compatability, don't use type str|None. multi types not allowed on older Pythons
class GexWeb(WebWorld):
    setup_en = Tutorial("Setup Gex",
        """A guide to setting up Archipelago Gex on your computer.""",
        "English",
        "setup_en.md",
        "setup/en",
        ["HemiJackson"]
        )


    tutorials = [setup_en]


class GexWorld(World):
    """
    Gex: Enter the Gecko follows the adventures of the bipedal lizard Gex, an old (at this point retired) action game hero who has lost his passion for adventure and has
    slumped into a state of intense apathy, now spending every waking second watching TV, ordering Chinese food, eating Chinese food, or watching TV while eating Chinese food.
    After what could be years in this state, Gex's routine is interrupted by Rez, an old arch-nemesis who wants only to annoy Gex and destroy the world by combining the forces of 
    various TV villains and running rampage on the real world. Gex, co-opted by the government and a crowbar (HALF LIFE 3 CONFIRMED) is then tasked to go and save the world again.
    """

    game: str = "Gex64: Enter the Gecko"
    version = "V4.4.2"
    web = GexWeb()
    topology_present = True
    # item_name_to_id = {name: data.btid for name, data in all_item_table.items()}
    item_name_to_id = {}
    # TODO add implicit edges instead of this hack
    explicit_indirect_conditions: False

    for name, data in all_item_table.items():
        if data.gid is None:  # Skip Victory Item
            continue
        item_name_to_id[name] = data.gid

    location_name_to_id = {name: data.gid for name, data in all_location_table.items()}

    item_name_groups = {
        "Remotes": all_group_table["remotes"],
    }

    options_dataclass =  GexOptions
    options: GexOptions

    def __init__(self, world, player):
        super(GexWorld, self).__init__(world, player)
        self.red_remotes_counter = 0
        self.silver_remotes_counter = 0
        self.gold_remotes_counter = 0

    def create_item(self, itemname: str) -> Item:
        item_classification = None
        
        if itemname == itemName.RED_REMOTE and self.red_remotes_counter > 33:
            item_classification = ItemClassification.filler
        elif itemname == itemName.RED_REMOTE:
            item_classification = ItemClassification.progression
        elif itemname == itemName.SILVER_REMOTE:
            item_classification = ItemClassification.progression
        elif itemname == itemName.GOLD_REMOTE:
            item_classification = ItemClassification.useful
        elif itemname == itemName.GILLIGEX_REMOTE:
            item_classification = ItemClassification.progression
        elif itemname == itemName.MOOSHOO_REMOTE:
            item_classification = ItemClassification.progression
        elif itemname == itemName.GEXZILLA_REMOTE:
            item_classification = ItemClassification.progression
        elif itemname == itemName.REZ_REMOTE:
            item_classification = ItemClassification.progression

        gexItem = all_item_table.get(itemname)
        if not gexItem:
            raise Exception(f"{itemname} is not a valid item name for Gex")

        if itemname == itemName.RED_REMOTE:
            self.red_remotes_counter += 1
        if itemname == itemName.SILVER_REMOTE:
            self.silver_remotes_counter += 1
        if itemname == itemName.GOLD_REMOTE:
            self.gold_remotes_counter += 1

        created_item = GexItem(itemname, item_classification, gexItem.gid, self.player)
        return created_item

    def create_event_item(self, name: str) -> Item:
        item_classification = ItemClassification.progression
        created_item = GexItem(name, item_classification, None, self.player)
        return created_item

    def create_items(self) -> None:
        itempool = []
        for name, itemData in all_item_table.items():
            if self.item_filter(name):
                for _ in range(itemData.qty):
                    itempool += [self.create_item(name)]
        self.multiworld.itempool.extend(itempool)


    def item_filter(self, name: str) -> Optional[ItemData]:

        if name == itemName.SILVER_REMOTE and not self.options.silver_remotes:
            return None
        if name == itemName.GOLD_REMOTE and not self.options.gold_remotes:
            return None
        if (name == itemName.GILLIGEX_REMOTE or name == itemName.MOOSHOO_REMOTE or name == itemName.GEXZILLA_REMOTE) and not self.options.gold_boss_remotes:
            return None
        if name == itemName.REZ_REMOTE:
            return None

        return name

    def create_regions(self) -> None:
        create_regions(self)
        connect_regions(self)
        self.pre_fill_me()

    def set_rules(self) -> None:
        rules = Rules.GexRules(self)
        return rules.set_rules()

    def pre_fill_me(self) -> None:
        item = self.create_item(itemName.REZ_REMOTE)
        self.get_location(locationName.CZGR).place_locked_item(item)

        if not self.options.silver_remotes:
            silver = [
                locationName.OOTSR1,
                locationName.OOTSR2,
                locationName.SSR1,
                locationName.SSR2,
                locationName.GCSR1,
                locationName.GCSR2,
                locationName.FSR1,
                locationName.FSR2,
                locationName.WDCSR1,
                locationName.WDCSR2,
                locationName.MTTSR1,
                locationName.MTTSR2,
                locationName.TUSOSR1,
                locationName.TUSOSR2,
                locationName.P9SR1,
                locationName.P9SR2,
                locationName.FTSR1,
                locationName.FTSR2,
                locationName.TOCSR1,
                locationName.TOCSR2,
                locationName.HISTGSR1,
                locationName.HISTGSR2,
                locationName.PITASR1,
                locationName.PITASR2,
                locationName.SNFSR1,
                locationName.SNFSR2,
                locationName.NWAAFSR1,
                locationName.NWAAFSR2,
            ]
            for sil in silver:
                item = self.create_item(itemName.SILVER_REMOTE)
                self.get_location(sil).place_locked_item(item)
        if not self.options.gold_remotes:
            gold = [
                locationName.A2SGR,
                locationName.BOGR,
                locationName.CADGR,
                locationName.IDNGR,
                locationName.LIACSGR,
                locationName.TSWLHGR,
                locationName.TT1GR,
            ]
            for gol in gold:
                item = self.create_item(itemName.GOLD_REMOTE)
                self.get_location(gol).place_locked_item(item)
        
        if not self.options.gold_boss_remotes:
            item = self.create_item(itemName.GILLIGEX_REMOTE)
            self.get_location(locationName.GIGR).place_locked_item(item)
            item = self.create_item(itemName.MOOSHOO_REMOTE)
            self.get_location(locationName.MPGR).place_locked_item(item)
            item = self.create_item(itemName.GEXZILLA_REMOTE)
            self.get_location(locationName.GVMGR).place_locked_item(item)
            

        # if not using certain options


    def fill_slot_data(self) -> Dict[str, Any]:
        gexoptions = self.options.as_dict(
            "silver_remotes",
            "gold_remotes",
            "gold_boss_remotes"
        )

        gexoptions["player_name"] = self.multiworld.player_name[self.player]
        gexoptions["seed"] = self.random.randint(12212, 9090763)

        return gexoptions
