import copy
import typing
from BaseClasses import Region

from .Names import regionName, locationName, itemName
from .Locations import GexLocation
from .Rules import GexRules


# This dict contains all the regions, as well as all the locations that are always tracked by Archipelago.
GEX_REGIONS: typing.Dict[str, typing.List[str]] = {
    "Menu":             [],
    regionName.MDA1:    [],
    regionName.MDA2:    [],
    regionName.MDA3:    [],
    regionName.MDA4:    [],
    regionName.MDA5:    [],
    regionName.MDA6:    [],
    regionName.OOTL:    [
        locationName.OOTRR1,
        locationName.OOTRR2,
        locationName.OOTRR3,
        locationName.OOTSR1,
        locationName.OOTSR2,
    ],
    regionName.SL:      [
        locationName.SRR1,
        locationName.SRR2,
        locationName.SRR3,
        locationName.SSR1,
        locationName.SSR2,
    ],
    regionName.GCL:     [
        locationName.GCRR1,
        locationName.GCRR2,
        locationName.GCRR3,
        locationName.GCSR1,
        locationName.GCSR2,
    ],
    regionName.FL:      [
        locationName.FRR1,
        locationName.FRR2,
        locationName.FRR3,
        locationName.FSR1,
        locationName.FSR2,
    ],
    regionName.WDCL:    [
        locationName.WDCRR1,
        locationName.WDCRR2,
        locationName.WDCSR1,
        locationName.WDCSR2,
    ],
    regionName.MTTL:    [
        locationName.MTTRR1,
        locationName.MTTRR2,
        locationName.MTTSR1,
        locationName.MTTSR2,
    ],
    regionName.TUSOL:   [
        locationName.TUSORR1,
        locationName.TUSORR2,
        locationName.TUSOSR1,
        locationName.TUSOSR2,
    ],
    regionName.P9L:     [
        locationName.P9RR1,
        locationName.P9RR2,
        locationName.P9SR1,
        locationName.P9SR2,
    ],
    regionName.FTL:     [
        locationName.FTRR1,
        locationName.FTRR2,
        locationName.FTSR1,
        locationName.FTSR2,
    ],
    regionName.TOCL:    [
        locationName.TOCRR1,
        locationName.TOCRR2,
        locationName.TOCRR3,
        locationName.TOCSR1,
        locationName.TOCSR2,
    ],
    regionName.HISTGL:  [
        locationName.HISTGRR1,
        locationName.HISTGRR2,
        locationName.HISTGRR3,
        locationName.HISTGSR1,
        locationName.HISTGSR2,
    ],
    regionName.PITAL:   [
        locationName.PITARR1,
        locationName.PITARR2,
        locationName.PITARR3,
        locationName.PITASR1,
        locationName.PITASR2,
    ],
    regionName.SNFL:    [
        locationName.SNFRR1,
        locationName.SNFRR2,
        locationName.SNFRR3,
        locationName.SNFSR1,
        locationName.SNFSR2,
    ],
    regionName.NWAAFL:  [
        locationName.NWAAFRR1,
        locationName.NWAAFSR1,
        locationName.NWAAFSR2,
    ],
    regionName.CZL:     [
        locationName.CZGR,
    ],
    regionName.A2SL:    [
        locationName.A2SGR,
    ],
    regionName.BOL:     [
        locationName.BOGR,
    ],
    regionName.CADL:    [
        locationName.CADGR,
    ],
    regionName.GVML:    [
        locationName.GVMGR,
    ],
    regionName.GIL:     [
        locationName.GIGR,
    ],
    regionName.IDNL:    [
        locationName.IDNGR,
    ],
    regionName.LIACSL:  [
        locationName.LIACSGR,
    ],
    regionName.MPL:     [
        locationName.MPGR,
    ],
    regionName.TSWLHL:  [
        locationName.TSWLHGR,
    ],
    regionName.TT1L:    [
        locationName.TT1GR,
    ],
}

def create_regions(self):
    player = self.player
    active_locations = self.location_name_to_id
    region_map = copy.deepcopy(GEX_REGIONS)


    # silver_remotes:
    region_map[regionName.OOTL].append(locationName.OOTSR1)
    region_map[regionName.OOTL].append(locationName.OOTSR2)
    region_map[regionName.SL].append(locationName.SSR1)
    region_map[regionName.SL].append(locationName.SSR2)
    region_map[regionName.GCL].append(locationName.GCSR1)
    region_map[regionName.GCL].append(locationName.GCSR2)
    region_map[regionName.FL].append(locationName.FSR1)
    region_map[regionName.FL].append(locationName.FSR1)
    region_map[regionName.WDCL].append(locationName.WDCSR1)
    region_map[regionName.WDCL].append(locationName.WDCSR2)
    region_map[regionName.MTTL].append(locationName.MTTSR1)
    region_map[regionName.MTTL].append(locationName.MTTSR2)
    region_map[regionName.TUSOL].append(locationName.TUSOSR1)
    region_map[regionName.TUSOL].append(locationName.TUSOSR2)
    region_map[regionName.P9L].append(locationName.P9SR1)
    region_map[regionName.P9L].append(locationName.P9SR2)
    region_map[regionName.FTL].append(locationName.FTSR1)
    region_map[regionName.FTL].append(locationName.FTSR1)
    region_map[regionName.TOCL].append(locationName.TOCSR1)
    region_map[regionName.TOCL].append(locationName.TOCSR2)
    region_map[regionName.HISTGL].append(locationName.HISTGSR1)
    region_map[regionName.HISTGL].append(locationName.HISTGSR2)
    region_map[regionName.PITAL].append(locationName.PITASR1)
    region_map[regionName.PITAL].append(locationName.PITASR1)
    region_map[regionName.SNFL].append(locationName.SNFSR1)
    region_map[regionName.SNFL].append(locationName.SNFSR2)
    region_map[regionName.NWAAFL].append(locationName.NWAAFSR1)
    region_map[regionName.NWAAFL].append(locationName.NWAAFSR2)

    # gold_remotes:
    region_map[regionName.A2SL].append(locationName.A2SGR)
    region_map[regionName.BOL].append(locationName.BOGR)
    region_map[regionName.CADL].append(locationName.CADGR)
    region_map[regionName.IDNL].append(locationName.IDNGR)
    region_map[regionName.LIACSL].append(locationName.LIACSGR)
    region_map[regionName.TSWLHL].append(locationName.TSWLHGR)
    region_map[regionName.TT1L].append(locationName.TT1GR)

    # gold_boss_remotes:
    region_map[regionName.GIL].append(locationName.GIGR)
    region_map[regionName.MPL].append(locationName.MPGR)
    region_map[regionName.GVML].append(locationName.GVMGR)

    # Rez
    # region_map[regionName.CZL].append(locationName.CZGR)

   

    self.multiworld.regions.extend(create_region(self.multiworld, self.player,\
          active_locations, region, locations) for region, locations in region_map.items())
    self.multiworld.get_location(locationName.Victory, player).place_locked_item(self.create_event_item(itemName.Victory))

def create_region(multiworld, player: int, active_locations, name: str, locations=None):
    ret = Region(name, player, multiworld)
    if locations:
        loc_to_id = {loc: active_locations.get(loc, 0) for loc in locations if active_locations.get(loc, None)}
        # if locationName.Victory in locations:
        #     ret.add_locations({locationName.Victory: None})
        # else:
        ret.add_locations(loc_to_id, GexLocation)
        if locationName.CZGR in locations:
            ret.add_locations({locationName.Victory: None}, GexLocation)
    return ret

# def generate_early(self) -> None:
#       self.multiworld.early_items[self.player][itemName.GILLIGEX_REMOTE] = 1 
#       self.multiworld.early_items[self.player][itemName.GEXZILLA_REMOTE] = 1 

def connect_regions(self):
    player = self.player
    rules = GexRules(self)

    region_menu = self.get_region("Menu")
    region_menu.add_exits({regionName.MDA1})

    region_Hub_1 = self.get_region(regionName.MDA1)
    region_Hub_1.add_exits(
        {regionName.OOTL, regionName.SL, regionName.GCL, regionName.GIL, regionName.A2SL, regionName.TT1L, regionName.MDA2},
        {
            regionName.GIL: lambda state: rules.remote_requirements(itemName.RED_REMOTE, state, 3),
            regionName.A2SL: lambda state: state.has(itemName.SILVER_REMOTE, player, 3),
            regionName.TT1L: lambda state: state.has(itemName.SILVER_REMOTE, player, 18),
            regionName.MDA2: lambda state: state.has(itemName.GILLIGEX_REMOTE, player, 1)
        }
    )
    self.get_region(regionName.OOTL).add_exits({regionName.MDA1})
    self.get_region(regionName.SL).add_exits({regionName.MDA1})
    self.get_region(regionName.GIL).add_exits({regionName.MDA1})
    self.get_region(regionName.A2SL).add_exits({regionName.MDA1})
    self.get_region(regionName.TT1L).add_exits({regionName.MDA1})

    region_Hub_2 = self.get_region(regionName.MDA2)
    region_Hub_2.add_exits(
        {regionName.MDA1, regionName.FL, regionName.WDCL, regionName.MTTL, regionName.MPL, regionName.TSWLHL, regionName.IDNL, regionName.MDA3, regionName.MDA4, regionName.MDA5},
        {
            regionName.MPL: lambda state: rules.remote_requirements(itemName.RED_REMOTE, state, 9),
            regionName.TSWLHL: lambda state: state.has(itemName.SILVER_REMOTE, player, 12),
            regionName.IDNL: lambda state: state.has(itemName.SILVER_REMOTE, player, 9),
            regionName.MDA3: lambda state: state.has(itemName.MOOSHOO_REMOTE, player, 1),
            regionName.MDA4: lambda state: state.has(itemName.RED_REMOTE, player, 14),
            regionName.MDA5: lambda state: state.has(itemName.GEXZILLA_REMOTE, player, 1),
        }
    )
    self.get_region(regionName.FL).add_exits({regionName.MDA1, regionName.MDA2})
    self.get_region(regionName.WDCL).add_exits({regionName.MDA1, regionName.MDA2})
    self.get_region(regionName.MTTL).add_exits({regionName.MDA1, regionName.MDA2})
    self.get_region(regionName.MPL).add_exits({regionName.MDA1, regionName.MDA2})
    self.get_region(regionName.TSWLHL).add_exits({regionName.MDA1, regionName.MDA2})
    self.get_region(regionName.IDNL).add_exits({regionName.MDA1, regionName.MDA2})

    region_Hub_3 = self.get_region(regionName.MDA3)
    region_Hub_3.add_exits(
        {regionName.MDA1,regionName.P9L, regionName.TUSOL, regionName.FTL, regionName.LIACSL, regionName.MDA2},
        {regionName.LIACSL: lambda state: state.has(itemName.SILVER_REMOTE, player, 21),
                        })

    self.get_region(regionName.P9L).add_exits({regionName.MDA1, regionName.MDA3})
    self.get_region(regionName.TUSOL).add_exits({regionName.MDA1, regionName.MDA3})
    self.get_region(regionName.FTL).add_exits({regionName.MDA1, regionName.MDA3})
    self.get_region(regionName.LIACSL).add_exits({regionName.MDA1, regionName.MDA3})

    region_Hub_4 = self.get_region(regionName.MDA4)
    region_Hub_4.add_exits({regionName.MDA1,regionName.MDA2, regionName.TOCL, regionName.HISTGL, regionName.GVML, regionName.BOL}, {
                            regionName.GVML: lambda state: state.has(itemName.RED_REMOTE, player, 21),
                            regionName.BOL: lambda state: state.has(itemName.SILVER_REMOTE, player, 24),
                        })

    self.get_region(regionName.TOCL).add_exits({regionName.MDA1, regionName.MDA4})
    self.get_region(regionName.HISTGL).add_exits({regionName.MDA1, regionName.MDA4})
    self.get_region(regionName.GVML).add_exits({regionName.MDA1, regionName.MDA4})
    self.get_region(regionName.BOL).add_exits({regionName.MDA1, regionName.MDA4})

    region_Hub_5 = self.get_region(regionName.MDA5)
    region_Hub_5.add_exits({regionName.MDA1,regionName.MDA2, regionName.SNFL, regionName.PITAL, regionName.CADL, regionName.MDA6}, {
                            regionName.CADL: lambda state: rules.remote_requirements(itemName.SILVER_REMOTE, state, 27),
                            regionName.MDA6: lambda state: rules.remote_requirements(itemName.RED_REMOTE, state, 26)
                        })
    
    self.get_region(regionName.SNFL).add_exits({regionName.MDA1, regionName.MDA5})
    self.get_region(regionName.PITAL).add_exits({regionName.MDA1, regionName.MDA5})
    self.get_region(regionName.CADL).add_exits({regionName.MDA1, regionName.MDA5})

    region_Hub_6 = self.get_region(regionName.MDA6)
    region_Hub_6.add_exits({regionName.MDA5, regionName.NWAAFL, regionName.CZL}, {
                            regionName.CZL: lambda state: rules.remote_requirements(itemName.RED_REMOTE, state, 33)
                        })
    
    self.get_region(regionName.NWAAFL).add_exits({regionName.MDA1, regionName.MDA6})
    self.get_region(regionName.CZL).add_exits({regionName.MDA1, regionName.MDA6})
