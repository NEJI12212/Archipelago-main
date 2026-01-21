from BaseClasses import Location
import typing
from .Names import locationName


class GexLocation(Location):
    game: str = "Gex64: Enter the Gecko"

class LocationData(typing.NamedTuple):
    #last good ID: 1231595 (SILOCK2)
    #12C770 pointer instead (1230704)
    gid: int = 0


# Red Remotes Locations
RRLoc_table = {
    locationName.OOTRR1: LocationData(12201),
    locationName.OOTRR2: LocationData(12202),
    locationName.OOTRR3: LocationData(12203),
    locationName.SRR1: LocationData(12204),
    locationName.SRR2: LocationData(12205),
    locationName.SRR3: LocationData(12206),
    locationName.GCRR1: LocationData(12207),
    locationName.GCRR2: LocationData(12208),
    locationName.GCRR3: LocationData(12209),
    locationName.FRR1: LocationData(12210),
    locationName.FRR2: LocationData(12211),
    locationName.FRR3: LocationData(12212),
    locationName.WDCRR1: LocationData(12213),
    locationName.WDCRR2: LocationData(12214),
    locationName.MTTRR1: LocationData(12215),
    locationName.MTTRR2: LocationData(12216),
    locationName.TUSORR1: LocationData(12217),
    locationName.TUSORR2: LocationData(12218),
    locationName.P9RR1: LocationData(12219),
    locationName.P9RR2: LocationData(12220),
    locationName.FTRR1: LocationData(12221),
    locationName.FTRR2: LocationData(12222),
    locationName.TOCRR1: LocationData(12223),
    locationName.TOCRR2: LocationData(12224),
    locationName.TOCRR3: LocationData(12225),
    locationName.HISTGRR1: LocationData(12226),
    locationName.HISTGRR2: LocationData(12227),
    locationName.HISTGRR3: LocationData(12228),
    locationName.PITARR1: LocationData(12229),
    locationName.PITARR2: LocationData(12230),
    locationName.PITARR3: LocationData(12231),
    locationName.SNFRR1: LocationData(12232),
    locationName.SNFRR2: LocationData(12233),
    locationName.SNFRR3: LocationData(12234),
    locationName.NWAAFRR1: LocationData(12235),
    # locationName.LDDRR1: LocationData(12236),
    # locationName.TCMRR1: LocationData(12237),
    # locationName.MACRR1: LocationData(12238),
    # locationName.MACRR2: LocationData(12239),
}
# Silver Remotes Locations
SRLoc_table = {
    locationName.OOTSR1: LocationData(12240),
    locationName.OOTSR2: LocationData(12241),
    locationName.SSR1: LocationData(12242),
    locationName.SSR2: LocationData(12243),
    locationName.GCSR1: LocationData(12244),
    locationName.GCSR2: LocationData(12245),
    locationName.FSR1: LocationData(12246),
    locationName.FSR2: LocationData(12247),
    locationName.WDCSR1: LocationData(12248),
    locationName.WDCSR2: LocationData(12249),
    locationName.MTTSR1: LocationData(12250),
    locationName.MTTSR2: LocationData(12251),
    locationName.TUSOSR1: LocationData(12252),
    locationName.TUSOSR2: LocationData(12253),
    locationName.P9SR1: LocationData(12254),
    locationName.P9SR2: LocationData(12255),
    locationName.FTSR1: LocationData(12256),
    locationName.FTSR2: LocationData(12257),
    locationName.TOCSR1: LocationData(12258),
    locationName.TOCSR2: LocationData(12259),
    locationName.HISTGSR1: LocationData(12260),
    locationName.HISTGSR2: LocationData(12261),
    locationName.PITASR1: LocationData(12262),
    locationName.PITASR2: LocationData(12263),
    locationName.SNFSR1: LocationData(12264),
    locationName.SNFSR2: LocationData(12265),
    locationName.NWAAFSR1: LocationData(12266),
    locationName.NWAAFSR2: LocationData(12267),
}
# Gold Remotes Locations
GRLoc_table = {
    locationName.A2SGR: LocationData(12269),
    locationName.BOGR: LocationData(12270),
    locationName.CADGR: LocationData(12271),
    locationName.GVMGR: LocationData(12272),
    locationName.GIGR: LocationData(12273),
    locationName.IDNGR: LocationData(12274),
    # locationName.IGTRGR: LocationData(12275),
    locationName.LIACSGR: LocationData(12276),
    locationName.MPGR: LocationData(12277),
    locationName.TSWLHGR: LocationData(12278),
    # locationName.TIUGR: LocationData(12279),
    locationName.TT1GR: LocationData(12280),
    locationName.CZGR: LocationData(12281),
}

all_location_table = {
    **RRLoc_table,
    **SRLoc_table,
    **GRLoc_table,
}
