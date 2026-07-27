from dataclasses import dataclass
from Options import Toggle, DeathLink, PerGameCommonOptions, Choice, DefaultOnToggle, Range, NamedRange, StartInventoryPool, FreeText

class RandomizeSilverRemotes(DefaultOnToggle):
    """Silver Remotes are randomized."""
    display_name = "Randomize Silver Remotes"

class RandomizeGoldRemotes(DefaultOnToggle):
    """Gold Remotes are randomized."""
    display_name = "Randomize Gold Remotes"

class RandomizeBossGoldRemotes(DefaultOnToggle):
    """Bosses Gold Remotes are randomized."""
    display_name = "Randomize Bosses Gold Remotes"

class RandomizeGates(DefaultOffToggle):
    """Gates are in the random pool."""
    display_name = "Randomize Gates"

class RandomizeBossAndBonusTV(DefaultOffToggle):
    """Boss and bonus stages are in the pool."""
    display_name = "Randomize Unlocking Bonus Levels and Boss Levels"

@dataclass
class GexOptions(PerGameCommonOptions):
    
    silver_remotes: RandomizeSilverRemotes
    gold_remotes: RandomizeGoldRemotes
    gold_boss_remotes: RandomizeBossGoldRemotes

