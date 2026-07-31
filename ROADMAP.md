<p align="center">
  <img src="https://github.com/unrealkoda/EpochRevival/blob/main/icon.png?raw=true" alt="DayZ Resurgence" width="256"/>
</p>

<h1 align="center">DayZ Resurgence — Development Roadmap</h1>

<p align="center">
  The evolution of the DayZ mod experience.<br>
  Taking the best of Epoch, Overpoch, Exile and Expansion<br>
  and building something greater than the sum of its parts.
</p>

---

## Current Status
> 🔧 **Pre-Alpha — Foundation Phase**
> Core project structure established. Local development server running. Development underway.

---

## A Note On Development Approach

DayZ Resurgence is built in a specific order. Config and script based work comes first as it establishes the survival feel and gives us something playable to test against early. Harder engine level work like helicopters and AI comes later once the foundation is solid.

---

## v0.1 — Foundation
> *Making The World Feel Right*

The first playable version. The core survival loop tuned to feel like a serious survival experience. All config and light scripting work.

### Map and Server
| Version | Feature | Status |
|---|---|---|
| v0.1.01 | Map integration and testing | ✅ Complete |

### Survival Stats
| Version | Feature | Status |
|---|---|---|
| v0.1.02 | cfggameplay.json — stamina, weight, lighting, temperature tuning | ✅ Complete |
| v0.1.03 | Hunger and thirst drain rates | ✅ Complete |
| v0.1.04 | Blood loss and regeneration rates | ✅ Complete |
| v0.1.05 | Infection and disease progression rates | ✅ Complete |
| v0.1.06 | Shock handling and recovery tuning | ✅ Complete |
| v0.1.07 | Temperature and wetness drain rates | ✅ Complete |

### Loot Economy
| Version | Feature | Status |
|---|---|---|
| v0.1.08 | globals.xml tuning — zombie counts, cleanup times, logout penalties | 🔵 In Progress |
| v0.1.09 | types.xml loot table overhaul — spawn rates and probabilities | ⬜ Planned |
| v0.1.10 | cfgspawnabletypes.xml — item category and location tuning | ⬜ Planned |
| v0.1.11 | cfglimitsdefinition.xml — item limit balancing | ⬜ Planned |
| v0.1.12 | cfgrandompresets.xml — random loot preset tuning | ⬜ Planned |

### Zombie Tuning
| Version | Feature | Status |
|---|---|---|
| v0.1.13 | Zombie spawn counts and density by area | ⬜ Planned |
| v0.1.14 | Zombie aggression, vision and hearing ranges | ⬜ Planned |
| v0.1.15 | Zombie attraction to gunshots | ⬜ Planned |
| v0.1.16 | Zombie horde formation at high value locations | ⬜ Planned |

### Animal Tuning
| Version | Feature | Status |
|---|---|---|
| v0.1.17 | Passive animal spawns — deer, rabbits, chickens | ⬜ Planned |
| v0.1.18 | Animal flee behaviour tuned for hunting playstyle | ⬜ Planned |
| v0.1.19 | Bear and wolf coexistence — both spawn together | ⬜ Planned |
| v0.1.20 | Wolf pack size behaviour — wary of bears when small pack | ⬜ Planned |
| v0.1.21 | Bear agitation threshold — aggressive when three or more wolves nearby | ⬜ Planned |
| v0.1.22 | Predator spawn location and density tuning | ⬜ Planned |

### Sound and Stealth
| Version | Feature | Status |
|---|---|---|
| v0.1.23 | Weapon sound radius values per weapon type | ⬜ Planned |
| v0.1.24 | Suppressor effectiveness tuning | ⬜ Planned |
| v0.1.25 | Fire and smoke visibility distances | ⬜ Planned |
| v0.1.26 | Animal reaction to gunshot sounds | ⬜ Planned |

### Weather and Environment
| Version | Feature | Status |
|---|---|---|
| v0.1.27 | cfgweather.xml — weather cycle tuning | ⬜ Planned |
| v0.1.28 | Day night cycle tuning | ⬜ Planned |
| v0.1.29 | cfgenvironment.xml — ambient life tuning | ⬜ Planned |

### Medical Tuning
| Version | Feature | Status |
|---|---|---|
| v0.1.30 | Medical item effectiveness values | ⬜ Planned |
| v0.1.31 | Bleeding rates from different wound types | ⬜ Planned |
| v0.1.32 | Disease and infection threshold tuning | ⬜ Planned |
| v0.1.33 | Pain system extension — tracked value driving screen and weapon effects | ⬜ Planned |
| v0.1.34 | Arm fracture extension from vanilla leg system | ⬜ Planned |
| v0.1.35 | Cardiac event system and epi-pen item | ⬜ Planned |
| v0.1.36 | New medical items — vitamins, activated charcoal | ⬜ Planned |

### Player Spawn
| Version | Feature | Status |
|---|---|---|
| v0.1.37 | cfgplayerspawnpoints.xml — spawn location tuning | ⬜ Planned |
| v0.1.38 | Starting gear and loadout definition | ⬜ Planned |

---

## v0.2 — Survival Depth
> *Energy, Sleep and Nutrition*

New survival systems that add a deeper layer of management beyond hunger and thirst. Entirely new mechanics built on the vanilla foundation.

### Energy System
| Version | Feature | Status |
|---|---|---|
| v0.2.01 | Energy tracked value on player | ⬜ Planned |
| v0.2.02 | Energy drain rate — slower than hunger and thirst | ⬜ Planned |
| v0.2.03 | Energy drain increased by physical activity | ⬜ Planned |
| v0.2.04 | Energy effect on stamina at percentage thresholds | ⬜ Planned |
| v0.2.05 | Screen effects at low energy levels | ⬜ Planned |
| v0.2.06 | Random pass out chance below 10 percent energy | ⬜ Planned |
| v0.2.07 | Eye icon HUD element — five states from open to closed | ⬜ Planned |
| v0.2.08 | Eye flickering animation before passing out | ⬜ Planned |

### Sleep System
| Version | Feature | Status |
|---|---|---|
| v0.2.09 | Sleeping bag item — placeable, portable | ⬜ Planned |
| v0.2.10 | Sleep state on player — vulnerable, cannot act | ⬜ Planned |
| v0.2.11 | Energy recovery rate while sleeping | ⬜ Planned |
| v0.2.12 | Sound and damage waking sleeping player | ⬜ Planned |
| v0.2.13 | Sleep recovery rate difference — sleeping bag vs bed vs floor | ⬜ Planned |
| v0.2.14 | Sleep timer and early wake option | ⬜ Planned |

### Nutrition and Cooking
| Version | Feature | Status |
|---|---|---|
| v0.2.15 | Energy value on all food items — separate from calories | ⬜ Planned |
| v0.2.16 | Food quality tiers — low, medium, high, exceptional | ⬜ Planned |
| v0.2.17 | Stimulant items — energy drinks and coffee spike and drain | ⬜ Planned |
| v0.2.18 | Recipe manager framework | ⬜ Planned |
| v0.2.19 | Ingredient preparation system — knife and chopping | ⬜ Planned |
| v0.2.20 | Cooking pot recipe extension | ⬜ Planned |
| v0.2.21 | Tier one simple recipes — single ingredient cooked | ⬜ Planned |
| v0.2.22 | Tier two combined recipes — two ingredients | ⬜ Planned |
| v0.2.23 | Tier three full recipes — three or more ingredients | ⬜ Planned |
| v0.2.24 | Hunters Stew — meat, potato, carrot, cabbage | ⬜ Planned |
| v0.2.25 | Tier four special recipes — rare ingredients | ⬜ Planned |
| v0.2.26 | Recipe book items and variants | ⬜ Planned |
| v0.2.27 | Ingredient spawn locations and rarity tuning | ⬜ Planned |
| v0.2.28 | Outfit energy drain modifiers | ⬜ Planned |

---

## v0.3 — Identity
> *Karma, Outfits and the Parcel System*

The mod begins to feel like Resurgence. Players have a moral identity and the parcel system gives the world a distinctive character.

### Karma System
| Version | Feature | Status |
|---|---|---|
| v0.3.01 | Karma tracked value on player | ⬜ Planned |
| v0.3.02 | Kill detection distinguishing murder from self defence | ⬜ Planned |
| v0.3.03 | Karma threshold system — survivor, bandit, hero tiers | ⬜ Planned |
| v0.3.04 | Karma persistence across sessions | ⬜ Planned |
| v0.3.05 | Karma decay over time — bandits can reform | ⬜ Planned |
| v0.3.06 | Bandit outfit auto assignment on karma threshold | ⬜ Planned |
| v0.3.07 | Hero outfit auto assignment on karma threshold | ⬜ Planned |
| v0.3.08 | Karma affecting trader prices | ⬜ Planned |
| v0.3.09 | Karma affecting safe zone access | ⬜ Planned |

### Outfit Parcel System
| Version | Feature | Status |
|---|---|---|
| v0.3.10 | Outfit parcel base class | ⬜ Planned |
| v0.3.11 | Outfit parcel description system | ⬜ Planned |
| v0.3.12 | Outfit swap mechanic with vulnerable animation | ⬜ Planned |
| v0.3.13 | Always wearing an outfit rule enforcement | ⬜ Planned |
| v0.3.14 | Items stay with outfit on swap | ⬜ Planned |
| v0.3.15 | Cannot pick up outfit containing items rule | ⬜ Planned |
| v0.3.16 | Outfit death repackaging as parcel on corpse | ⬜ Planned |

### Outfit Variants
| Version | Feature | Status |
|---|---|---|
| v0.3.17 | Civilian outfit variants — suit, tracksuit, hiking, work, casual | ⬜ Planned |
| v0.3.18 | Hunter outfit variants — woodland, marsh, winter, ghillie | ⬜ Planned |
| v0.3.19 | Military outfit variants — BDU, CUU, patrol, assault, medic | ⬜ Planned |
| v0.3.20 | Specialist outfit variants — bandit, hero, mechanic, trader | ⬜ Planned |
| v0.3.21 | Outfit slot counts per tier | ⬜ Planned |
| v0.3.22 | Outfit weight capacity per tier | ⬜ Planned |
| v0.3.23 | Outfit energy drain modifiers per tier | ⬜ Planned |

### Backpack System
| Version | Feature | Status |
|---|---|---|
| v0.3.24 | Backpack variants with slot counts and weight capacities | ⬜ Planned |
| v0.3.25 | Backpack spawning as visible collapsed items | ⬜ Planned |
| v0.3.26 | Backpack dropping separately on death | ⬜ Planned |
| v0.3.27 | Backpack spawn locations and rarity tuning | ⬜ Planned |

---

## v0.4 — Ownership
> *Base Building, Territory and Plot Poles*

Players can establish a presence in the world. Bases give survivors something to fight for and protect.

### Plot Pole System
| Version | Feature | Status |
|---|---|---|
| v0.4.01 | Flag pole extension as plot pole ownership system | ⬜ Planned |
| v0.4.02 | Owner UID storage and persistence | ⬜ Planned |
| v0.4.03 | Group member array for shared ownership | ⬜ Planned |
| v0.4.04 | Build radius authorisation enforcement | ⬜ Planned |
| v0.4.05 | Interaction menu for ownership management | ⬜ Planned |
| v0.4.06 | Add and remove group members | ⬜ Planned |
| v0.4.07 | Transfer ownership system | ⬜ Planned |
| v0.4.08 | Unauthorised build blocking within radius | ⬜ Planned |
| v0.4.09 | Maintenance decay system | ⬜ Planned |

### Raiding System
| Version | Feature | Status |
|---|---|---|
| v0.4.10 | Raiding via explosives tuning within radius | ⬜ Planned |
| v0.4.11 | Lockpicking tool and interaction | ⬜ Planned |
| v0.4.12 | Combination lock system for doors | ⬜ Planned |
| v0.4.13 | Lockbox placeable storage with combination code | ⬜ Planned |
| v0.4.14 | Persistent combination code storage across restarts | ⬜ Planned |
| v0.4.15 | Cannot pick up lockbox containing items rule | ⬜ Planned |

### Garden System
| Version | Feature | Status |
|---|---|---|
| v0.4.16 | Garden plot placeable within base radius | ⬜ Planned |
| v0.4.17 | Vegetable growing system — potatoes, carrots, cabbage, onions | ⬜ Planned |
| v0.4.18 | Growth timer and watering requirement | ⬜ Planned |
| v0.4.19 | Harvest interaction and yield | ⬜ Planned |
| v0.4.20 | Garden raiding by unauthorised players | ⬜ Planned |

---

## v0.5 — Economy
> *Currency, Trading and the Player Economy*

The player driven economy comes online. Survivors have reasons to interact peacefully as well as violently.

### Currency System
| Version | Feature | Status |
|---|---|---|
| v0.5.01 | Physical currency item definitions and denominations | ⬜ Planned |
| v0.5.02 | Currency weight values | ⬜ Planned |
| v0.5.03 | Coin pouch wearable item | ⬜ Planned |
| v0.5.04 | Briefcase high value currency transport | ⬜ Planned |
| v0.5.05 | Anti duplication logic for currency | ⬜ Planned |
| v0.5.06 | Currency persistence across restarts | ⬜ Planned |
| v0.5.07 | Currency loss on death system | ⬜ Planned |

### Trader System
| Version | Feature | Status |
|---|---|---|
| v0.5.08 | Basic trader NPC framework | ⬜ Planned |
| v0.5.09 | Trader city location design | ⬜ Planned |
| v0.5.10 | Safe zone enforcement around trader areas | ⬜ Planned |
| v0.5.11 | Trader inventory definitions | ⬜ Planned |
| v0.5.12 | Fixed pricing system | ⬜ Planned |
| v0.5.13 | Karma affecting trader prices | ⬜ Planned |
| v0.5.14 | Player selling to traders | ⬜ Planned |
| v0.5.15 | Trader inventory refresh system | ⬜ Planned |
| v0.5.16 | Safe zone violation consequences | ⬜ Planned |
| v0.5.17 | Dynamic pricing based on supply and demand | ⬜ Planned |

### Vehicle Ownership
| Version | Feature | Status |
|---|---|---|
| v0.5.18 | Vehicle key system — lock and unlock | ⬜ Planned |
| v0.5.19 | Vehicle ownership persistence | ⬜ Planned |
| v0.5.20 | Hotwiring mechanic for unowned vehicles | ⬜ Planned |
| v0.5.21 | Vehicle storage and inventory tuning | ⬜ Planned |

---

## v0.6 — Events
> *World Events, AI and Dynamic Content*

The world becomes dynamic and unpredictable. No two sessions feel the same.

### Helicopter Crash Sites
| Version | Feature | Status |
|---|---|---|
| v0.6.01 | Crash site event manager | ⬜ Planned |
| v0.6.02 | Random valid location selection | ⬜ Planned |
| v0.6.03 | Fire and smoke effects | ⬜ Planned |
| v0.6.04 | Fire lifecycle — intense to cold | ⬜ Planned |
| v0.6.05 | Smoke column visible by day | ⬜ Planned |
| v0.6.06 | Fire glow visible by night | ⬜ Planned |
| v0.6.07 | Crash site loot table definitions | ⬜ Planned |
| v0.6.08 | Zombie horde attached to crash site | ⬜ Planned |
| v0.6.09 | Server announcement system | ⬜ Planned |

### Zombie Horde Events
| Version | Feature | Status |
|---|---|---|
| v0.6.10 | Zombie horde event manager | ⬜ Planned |
| v0.6.11 | Horde composition and scaling by server population | ⬜ Planned |
| v0.6.12 | Horde movement toward sound sources | ⬜ Planned |
| v0.6.13 | Horde lifecycle — spawning, active, dispersing | ⬜ Planned |
| v0.6.14 | Horde server announcement via radio | ⬜ Planned |
| v0.6.15 | Post horde supply cache spawn | ⬜ Planned |
| v0.6.16 | Horde interaction with wildlife | ⬜ Planned |

### AI Bandit System
| Version | Feature | Status |
|---|---|---|
| v0.6.17 | AI bandit framework and base class | ⬜ Planned |
| v0.6.18 | Crash site AI guardian spawning | ⬜ Planned |
| v0.6.19 | Crash site AI patrol behaviour | ⬜ Planned |
| v0.6.20 | Crash site AI combat behaviour | ⬜ Planned |
| v0.6.21 | Crash site AI scaling to server population | ⬜ Planned |
| v0.6.22 | Crash site AI loot definitions | ⬜ Planned |
| v0.6.23 | Crash site AI despawn when site goes cold | ⬜ Planned |
| v0.6.24 | Roaming AI spawn manager | ⬜ Planned |
| v0.6.25 | Distance based spawn bubble per player | ⬜ Planned |
| v0.6.26 | Spawn probability by location type | ⬜ Planned |
| v0.6.27 | Spawn chance reduction near active zombies | ⬜ Planned |
| v0.6.28 | Global AI population cap | ⬜ Planned |
| v0.6.29 | AI scaling by server population | ⬜ Planned |
| v0.6.30 | Roaming AI despawn when out of range | ⬜ Planned |
| v0.6.31 | Scavenger tier AI | ⬜ Planned |
| v0.6.32 | Bandit tier AI | ⬜ Planned |
| v0.6.33 | Veteran tier AI | ⬜ Planned |
| v0.6.34 | AI kills do not affect karma | ⬜ Planned |

### Additional Events
| Version | Feature | Status |
|---|---|---|
| v0.6.35 | Supply drop event | ⬜ Planned |
| v0.6.36 | Bandit camp event | ⬜ Planned |
| v0.6.37 | Survivor rescue event | ⬜ Planned |
| v0.6.38 | Event manager scheduling system | ⬜ Planned |

---

## v0.7 — Crafting
> *Crafting System*

Survivors can create what they cannot find. Crafting rewards knowledge and resourcefulness.

| Version | Feature | Status |
|---|---|---|
| v0.7.01 | Crafting recipe system framework | ⬜ Planned |
| v0.7.02 | Craftable medical items — blood bags, splints | ⬜ Planned |
| v0.7.03 | Craftable base building components | ⬜ Planned |
| v0.7.04 | Craftable tools and equipment | ⬜ Planned |
| v0.7.05 | Craftable weapons and modifications | ⬜ Planned |
| v0.7.06 | Crafting UI integration | ⬜ Planned |
| v0.7.07 | Component weight and slot considerations | ⬜ Planned |
| v0.7.08 | Crafting tied to specific locations or tools | ⬜ Planned |

---

## v0.8 — Flight
> *Unarmed Helicopters*

The skies open up. Transportation and reconnaissance change the strategic landscape entirely.

| Version | Feature | Status |
|---|---|---|
| v0.8.01 | Helicopter flight model research from Expansion GitHub | ⬜ Planned |
| v0.8.02 | Custom helicopter base class independent of Expansion | ⬜ Planned |
| v0.8.03 | Client server sync for helicopter physics | ⬜ Planned |
| v0.8.04 | UH-1H Huey equivalent | ⬜ Planned |
| v0.8.05 | Light scout helicopter equivalent | ⬜ Planned |
| v0.8.06 | Helicopter spawn locations | ⬜ Planned |
| v0.8.07 | Helicopter condition on spawn tuning | ⬜ Planned |
| v0.8.08 | Helicopter fuel system | ⬜ Planned |
| v0.8.09 | Helicopter repair requirements | ⬜ Planned |
| v0.8.10 | Helicopter sound radius values | ⬜ Planned |
| v0.8.11 | Helicopter crash behaviour | ⬜ Planned |

---

## v0.9 — Air Superiority
> *Armed Helicopters*

The most technically challenging milestone. Armed helicopters redefine the threat landscape.

| Version | Feature | Status |
|---|---|---|
| v0.9.01 | Gunner seat framework | ⬜ Planned |
| v0.9.02 | Gunner camera and input system | ⬜ Planned |
| v0.9.03 | Mounted weapon base class | ⬜ Planned |
| v0.9.04 | Projectile spawning from moving vehicle | ⬜ Planned |
| v0.9.05 | Network synchronisation for vehicle mounted weapons | ⬜ Planned |
| v0.9.06 | Collision and damage on networked moving objects | ⬜ Planned |
| v0.9.07 | Minigun variant | ⬜ Planned |
| v0.9.08 | Rocket pod variant | ⬜ Planned |
| v0.9.09 | Armed helicopter variant definitions | ⬜ Planned |
| v0.9.10 | Ammunition and reload system for mounted weapons | ⬜ Planned |
| v0.9.11 | Balancing and performance testing | ⬜ Planned |

---

## v0.10 — Polish
> *Refinement and Balance*

Everything is in place. This phase is about making it feel right.

| Version | Feature | Status |
|---|---|---|
| v0.10.01 | Full playtesting pass on all systems | ⬜ Planned |
| v0.10.02 | Economy balancing based on player feedback | ⬜ Planned |
| v0.10.03 | Karma threshold tuning | ⬜ Planned |
| v0.10.04 | AI difficulty balancing | ⬜ Planned |
| v0.10.05 | Weight value refinements | ⬜ Planned |
| v0.10.06 | Loot table final balancing | ⬜ Planned |
| v0.10.07 | Medical system final tuning | ⬜ Planned |
| v0.10.08 | Energy system final tuning | ⬜ Planned |
| v0.10.09 | Recipe balance and ingredient rarity tuning | ⬜ Planned |
| v0.10.10 | Performance optimisation pass | ⬜ Planned |
| v0.10.11 | Netcode review and optimisation | ⬜ Planned |
| v0.10.12 | Bug fixing pass across all systems | ⬜ Planned |
| v0.10.13 | Admin tools for server management | ⬜ Planned |
| v0.10.14 | Server configuration documentation | ⬜ Planned |

---

## v1.0 — Release
> *DayZ Resurgence*

The full Resurgence experience.

| Version | Feature | Status |
|---|---|---|
| v1.0.01 | Full Steam Workshop release | ⬜ Planned |
| v1.0.02 | Server setup documentation | ⬜ Planned |
| v1.0.03 | Player guide documentation | ⬜ Planned |
| v1.0.04 | Known issues documentation | ⬜ Planned |
| v1.0.05 | Community Discord established | ⬜ Planned |
| v1.0.06 | First stable public server running | ⬜ Planned |

---

## Beyond v1.0

Features under consideration for post release development:

- Additional outfit variants
- Additional helicopter variants including fixed wing aircraft
- Expanded trader inventories
- Seasonal events
- Additional map support
- Expanded recipe system
- Advanced group and clan features
- Community suggested features
- Quests and mission system expansion
- Fishing system
- Advanced animal taming

---

## Community and Outreach

| Milestone | Task | Status |
|---|---|---|
| Pre-release | Create Discord server | ⬜ Planned |
| Pre-release | YouTube channel setup | ⬜ Planned |
| v0.5 complete | Begin Reddit development posts | ⬜ Planned |
| v0.7 complete | Contact Scalespeeder Gaming | ⬜ Planned |
| v0.7 complete | Contact other DayZ content creators | ⬜ Planned |
| v0.9 complete | Press release to DayZ community sites | ⬜ Planned |
| v1.0 | Full public launch | ⬜ Planned |

---

## Inspirations

DayZ Resurgence draws inspiration from and builds upon the legacy of:
- **DayZ Epoch** — economy, karma, crash sites, armed helicopters
- **Overpoch** — expanded weapons and vehicles
- **Exile** — territory system, respect, extreme survival start
- **DayZ Expansion** — flight model, market system, group mechanics

---

## Status Key

| Symbol | Meaning |
|---|---|
| ⬜ Planned | Not yet started |
| 🔵 In Progress | Currently in development |
| ✅ Complete | Finished and tested |
| ⏸️ On Hold | Deprioritised temporarily |
| ❌ Cancelled | Removed from scope |

---

## A Note On Timelines

DayZ Resurgence is a passion project developed by Unreal Koda and contributors.
No release dates are promised. Each version releases when it is ready and stable.
Quality over speed is the guiding principle of this project.

---

<p align="center">
  <em>The evolution of the DayZ mod experience — built by Unreal Koda and contributors</em>
</p>
