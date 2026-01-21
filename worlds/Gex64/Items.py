from BaseClasses import Item
from typing import Dict, NamedTuple
from .Names import itemName, locationName


class GexItem(Item):
    # 1230915 (CKWARP2) but beware of level access keys that are way higher!
    game: str = "Gex64: Enter the Gecko"
class ItemData(NamedTuple):
    gid: int = 0
    qty: int = 0



remote_table = {
    itemName.RED_REMOTE:        ItemData(12201, 35),
    itemName.SILVER_REMOTE:     ItemData(12202, 28),
    itemName.GOLD_REMOTE:       ItemData(12203, 7),
    itemName.GILLIGEX_REMOTE:   ItemData(12204, 1),
    itemName.MOOSHOO_REMOTE:    ItemData(12205, 1),
    itemName.GEXZILLA_REMOTE:   ItemData(12206, 1),
    itemName.REZ_REMOTE:        ItemData(12207, 1),
}



all_item_table: Dict[str, ItemData] = {
    **remote_table,
}

all_group_table: Dict[str, Dict[str, ItemData]] = {
    "remotes": remote_table,
}
