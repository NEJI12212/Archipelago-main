from BaseClasses import CollectionState
from typing import TYPE_CHECKING

from .Names import regionName, itemName, locationName
from worlds.generic.Rules import add_rule, set_rule, forbid_item, add_item_rule

# I don't know what is going on here, but it works.
if TYPE_CHECKING:
    from . import GexWorld

# Shamelessly Stolen from KH2 :D

class GexRules:
    player: int
    world: "GexWorld"
    region_rules = {}

    def __init__(self, world: "GexWorld") -> None:
        self.player = world.player
        self.world = world


    def set_rules(self) -> None:

        self.world.multiworld.completion_condition[self.player] = lambda state: state.has(itemName.Victory, self.player)

    def remote_requirements(self, remote_type, state, amount) -> bool:
        s = state.has(remote_type, self.player, amount)
        # if amount > 25:
        #     print("hi")
        return s