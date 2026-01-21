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

@dataclass
class GexOptions(PerGameCommonOptions):
    
    silver_remotes: RandomizeSilverRemotes
    gold_remotes: RandomizeGoldRemotes
    gold_boss_remotes: RandomizeBossGoldRemotes

