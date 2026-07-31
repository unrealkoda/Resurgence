<p align="center">
  <img src="https://github.com/unrealkoda/Resurgence/blob/main/icon.png?raw=true" alt="DayZ Resurgence" width="256"/>
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
> Core project structure established. Local development server running. Active development underway.

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
| v0.1.01 | Map integration and testing — Chernarusplus | ✅ Complete |

### Survival Stats
| Version | Feature | Status |
|---|---|---|
| v0.1.02 | cfggameplay.json — stamina, weight, lighting, temperature tuning | ✅ Complete |
| v0.1.03 | Hunger and thirst drain rates | ✅ Complete |
| v0.1.04 | Blood loss and regeneration rates | ✅ Complete |
| v0.1.05 | Infection and disease progression rates | ✅ Complete |
| v0.1.06 | Shock handling and recovery tuning | ✅ Complete |
| v0.1.07 | Temperature and wetness drain rates | ✅ Complete |

### Economy Config
| Version | Feature | Status |
|---|---|---|
| v0.1.08 | globals.xml tuning — zombie counts, cleanup times, logout penalties | ✅ Complete |
| v0.1.09 | types.xml loot table overhaul — full file review and rebalance | 🔵 In Progress |
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
| v0.2.13 | Sleep recovery rate difference — sleeping bag vs bed vs improvised shelter | ⬜ Planned |
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
| v0.2.28 | Outfit energy drain modifiers per tier | ⬜ Planned |

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
| v0.3.06 | Karma threshold crossing detection | ⬜ Planned |
| v0.3.07 | Bandit drum stinger sound on threshold crossing | ⬜ Planned |
| v0.3.08 | Hero trumpet stinger sound on threshold crossing | ⬜ Planned |
| v0.3.09 | Reversal stinger sound on threshold uncrossing | ⬜ Planned |
| v0.3.10 | Bandit screen effect — dark vignette and red tint | ⬜ Planned |
| v0.3.11 | Hero screen effect — warm golden light wash | ⬜ Planned |
| v0.3.12 | Reversal screen effect — brief fade to normal | ⬜ Planned |
| v0.3.13 | Current outfit moves to inventory on karma outfit equip | ⬜ Planned |
| v0.3.14 | Karma outfit auto equips on threshold crossing | ⬜ Planned |
| v0.3.15 | Karma outfit auto unequips on threshold uncrossing | ⬜ Planned |
| v0.3.16 | Nearby player stinger broadcast via RPC | ⬜ Planned |
| v0.3.17 | Nearby player subtle threshold notification | ⬜ Planned |
| v0.3.18 | Status messages on threshold crossing and uncrossing | ⬜ Planned |
| v0.3.19 | Multiple bandit outfit variants by karma depth | ⬜ Planned |
| v0.3.20 | Multiple hero outfit variants by karma depth | ⬜ Planned |
| v0.3.21 | Hero and bandit outfits cannot be interacted with as items | ⬜ Planned |
| v0.3.22 | Hero and bandit outfits vanish on player death | ⬜ Planned |
| v0.3.23 | Corpse reverts to neutral survivor outfit parcel on death | ⬜ Planned |
| v0.3.24 | Karma affecting trader prices | ⬜ Planned |
| v0.3.25 | Karma affecting safe zone access | ⬜ Planned |
| v0.3.26 | Karma gated item equip restrictions | ⬜ Planned |
| v0.3.27 | Skull balaclava bandit only restriction | ⬜ Planned |
| v0.3.28 | Auto unequip karma gated items on threshold change | ⬜ Planned |
| v0.3.29 | Hero armband hero only restriction | ⬜ Planned |

### Outfit Parcel System
| Version | Feature | Status |
|---|---|---|
| v0.3.30 | Outfit parcel base class | ⬜ Planned |
| v0.3.31 | Outfit parcel description system | ⬜ Planned |
| v0.3.32 | Outfit parcel fills multiple vanilla slots simultaneously on open | ⬜ Planned |
| v0.3.33 | Parcel ceases to exist when outfit is worn | ⬜ Planned |
| v0.3.34 | Parcel reappears when outfit is swapped off | ⬜ Planned |
| v0.3.35 | Outfit swap mechanic with 4 to 5 second vulnerable animation | ⬜ Planned |
| v0.3.36 | Always wearing an outfit rule enforcement | ⬜ Planned |
| v0.3.37 | Items stay with outfit on swap | ⬜ Planned |
| v0.3.38 | Cannot pick up outfit parcel containing items rule | ⬜ Planned |
| v0.3.39 | Outfit death repackaging as parcel on corpse | ⬜ Planned |
| v0.3.40 | Block individual clothing slot removal when outfit equipped | ⬜ Planned |
| v0.3.41 | Outfit mouseover flavour descriptions per slot | ⬜ Planned |
| v0.3.42 | Outfit section visually distinct from equipment in inventory | ⬜ Planned |

### Outfit Clothing Config
| Version | Feature | Status |
|---|---|---|
| v0.3.43 | Jacket, trouser, boot and glove damage prevention config | ⬜ Planned |
| v0.3.44 | All individual jacket trouser boot glove variants set to nominal 0 in types.xml | ⬜ Planned |

### Outfit Variants
| Version | Feature | Status |
|---|---|---|
| v0.3.45 | Civilian outfit variants — suit, tracksuit, hiking, work, casual | ⬜ Planned |
| v0.3.46 | Hunter outfit variants — woodland, marsh, winter, ghillie | ⬜ Planned |
| v0.3.47 | Military outfit variants — BDU, CUU, patrol, assault, medic | ⬜ Planned |
| v0.3.48 | Specialist outfit variants — mechanic, trader, survivor | ⬜ Planned |
| v0.3.49 | NBC outfit variant with acid rain protection flag | ⬜ Planned |
| v0.3.50 | Outfit slot counts per tier | ⬜ Planned |
| v0.3.51 | Outfit weight capacity per tier | ⬜ Planned |
| v0.3.52 | Outfit energy drain modifiers per tier | ⬜ Planned |
| v0.3.53 | Outfit parcel spawn table entries for all variants | ⬜ Planned |

### Equipment Overlay System
| Version | Feature | Status |
|---|---|---|
| v0.3.54 | Vest variants — press, leather, assault, plate carrier tiers | ⬜ Planned |
| v0.3.55 | Helmet variants — hard hat, motorcycle, ballistic, military, assault tiers | ⬜ Planned |
| v0.3.56 | Balaclava and face covering variants remain equippable | ⬜ Planned |
| v0.3.57 | Gasmask and respirator as functional NBC partial protection | ⬜ Planned |
| v0.3.58 | Glasses and goggles as cosmetic player choice | ⬜ Planned |
| v0.3.59 | Armbands as group identification items | ⬜ Planned |
| v0.3.60 | Vest and helmet damage affects protection values | ⬜ Planned |
| v0.3.61 | Balaclava and glasses no damage — cosmetic only | ⬜ Planned |

### Backpack System
| Version | Feature | Status |
|---|---|---|
| v0.3.62 | Backpack variants with slot counts and weight capacities | ⬜ Planned |
| v0.3.63 | Backpack spawning as visible collapsed items in world | ⬜ Planned |
| v0.3.64 | Backpack dropping separately on death | ⬜ Planned |
| v0.3.65 | Backpack condition affects weight capacity | ⬜ Planned |
| v0.3.66 | Backpack spawn locations and rarity tuning | ⬜ Planned |

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
| v0.4.17 | Vegetable growing — potatoes, carrots, cabbage, onions | ⬜ Planned |
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
| v0.5.09 | Trader city location design on Chernarusplus | ⬜ Planned |
| v0.5.10 | Safe zone enforcement around trader areas | ⬜ Planned |
| v0.5.11 | Trader inventory definitions | ⬜ Planned |
| v0.5.12 | Fixed pricing system | ⬜ Planned |
| v0.5.13 | Karma affecting trader prices | ⬜ Planned |
| v0.5.14 | Player selling to traders | ⬜ Planned |
| v0.5.15 | Trader inventory refresh system | ⬜ Planned |
| v0.5.16 | Safe zone violation consequences | ⬜ Planned |
| v0.5.17 | Dynamic pricing based on supply and demand | ⬜ Planned |

### Tailor System
| Version | Feature | Status |
|---|---|---|
| v0.5.18 | Tailor NPC framework | ⬜ Planned |
| v0.5.19 | Tailor outfit crafting menu | ⬜ Planned |
| v0.5.20 | Crafting material item definitions | ⬜ Planned |
| v0.5.21 | Fabric scraps spawn in residential areas | ⬜ Planned |
| v0.5.22 | Military fabric spawn in military areas | ⬜ Planned |
| v0.5.23 | Kevlar panel crash site and rare military spawn | ⬜ Planned |
| v0.5.24 | NBC material acid rain cache and rare military spawn | ⬜ Planned |
| v0.5.25 | Leather from animal skinning | ⬜ Planned |
| v0.5.26 | Dye variants spawn in residential areas | ⬜ Planned |
| v0.5.27 | Currency cost tiers per outfit category | ⬜ Planned |
| v0.5.28 | Karma check restricting outfit availability at tailor | ⬜ Planned |
| v0.5.29 | Hero and bandit outfits absent from tailor menu entirely | ⬜ Planned |
| v0.5.30 | Tailor component combination restriction check | ⬜ Planned |
| v0.5.31 | Tailor refusal dialogue for restricted combinations | ⬜ Planned |
| v0.5.32 | Exclusive tailor only outfit designs | ⬜ Planned |
| v0.5.33 | Multiple tailors specialising by trader city | ⬜ Planned |
| v0.5.34 | Outfit refresh cosmetic service at tailor | ⬜ Planned |

### Vehicle Ownership
| Version | Feature | Status |
|---|---|---|
| v0.5.35 | Vehicle key system — lock and unlock | ⬜ Planned |
| v0.5.36 | Vehicle ownership persistence | ⬜ Planned |
| v0.5.37 | Hotwiring mechanic for unowned vehicles | ⬜ Planned |
| v0.5.38 | Vehicle storage and inventory tuning | ⬜ Planned |

### Vehicle System Overhaul
| Version | Feature | Status |
|---|---|---|
| v0.5.39 | Vehicle component condition tracking | ⬜ Planned |
| v0.5.40 | Component condition persistence across restarts | ⬜ Planned |
| v0.5.41 | Oil degradation over time and distance | ⬜ Planned |
| v0.5.42 | Battery degradation over time | ⬜ Planned |
| v0.5.43 | Spark plug degradation over use | ⬜ Planned |
| v0.5.44 | Tyre wear from terrain and damage | ⬜ Planned |
| v0.5.45 | Component condition affecting vehicle performance | ⬜ Planned |
| v0.5.46 | Dashboard warning indicators in vehicle | ⬜ Planned |
| v0.5.47 | Component installation state tracking | ⬜ Planned |
| v0.5.48 | Vehicle cannot be driven until all components properly installed | ⬜ Planned |
| v0.5.49 | Wheel installation and removal with wrench | ⬜ Planned |
| v0.5.50 | Battery installation and removal with tools | ⬜ Planned |
| v0.5.51 | Radiator installation and removal with socket set | ⬜ Planned |
| v0.5.52 | Hood pop mechanic from driver seat | ⬜ Planned |
| v0.5.53 | Hood lift interaction from vehicle exterior | ⬜ Planned |
| v0.5.54 | Engine bay only accessible when hood open | ⬜ Planned |
| v0.5.55 | Hood flies open at speed if not properly closed | ⬜ Planned |
| v0.5.56 | Hood open blocks driver vision | ⬜ Planned |
| v0.5.57 | Tyre pressure tracking per individual tyre | ⬜ Planned |
| v0.5.58 | Air pressure gauge item | ⬜ Planned |
| v0.5.59 | Tyre pressure affecting handling and speed | ⬜ Planned |
| v0.5.60 | Natural tyre pressure loss over time | ⬜ Planned |
| v0.5.61 | Portable hand pump item for field inflation | ⬜ Planned |
| v0.5.62 | Air compressor at garages and petrol stations | ⬜ Planned |
| v0.5.63 | Puncture causing rapid pressure loss | ⬜ Planned |
| v0.5.64 | Driving on flat permanently damages wheel | ⬜ Planned |
| v0.5.65 | Vehicle lock system — component access rules | ⬜ Planned |
| v0.5.66 | Locked vehicle allows wheel removal only | ⬜ Planned |
| v0.5.67 | Lockpick item variants — improvised, basic, quality, professional | ⬜ Planned |
| v0.5.68 | Lockpick success chance calculation with modifiers | ⬜ Planned |
| v0.5.69 | Lockpick consumed on use regardless of success | ⬜ Planned |
| v0.5.70 | Failed lockpick damages lock over multiple attempts | ⬜ Planned |
| v0.5.71 | Lockpick sound attracting nearby zombies | ⬜ Planned |
| v0.5.72 | Hotwire mechanic — interior only | ⬜ Planned |
| v0.5.73 | Hotwire kit item variants | ⬜ Planned |
| v0.5.74 | Hotwire success chance with modifiers | ⬜ Planned |
| v0.5.75 | Ignition damage from failed hotwire attempts | ⬜ Planned |
| v0.5.76 | Owner notification on vehicle access | ⬜ Planned |
| v0.5.77 | Vehicle tracking device item | ⬜ Planned |
| v0.5.78 | Tracking device installation and handheld tracker | ⬜ Planned |
| v0.5.79 | Tracking device search and removal mechanic | ⬜ Planned |
| v0.5.80 | Tow rope item and towing mechanic | ⬜ Planned |
| v0.5.81 | Mechanic outfit repair and lockpick time bonus | ⬜ Planned |
| v0.5.82 | Petrol versus diesel fuel distinction | ⬜ Planned |

### Garage Locations
| Version | Feature | Status |
|---|---|---|
| v0.5.83 | Military garage zones — full service with safe zone | ⬜ Planned |
| v0.5.84 | Town garage zones — mid service with safe zone | ⬜ Planned |
| v0.5.85 | Petrol station zones — basic service with safe zone | ⬜ Planned |
| v0.5.86 | Player improvised workshop craftable at base | ⬜ Planned |
| v0.5.87 | Military mechanic NPC — full service | ⬜ Planned |
| v0.5.88 | Civilian mechanic NPC — mid service | ⬜ Planned |
| v0.5.89 | Petrol station attendant NPC — basic service | ⬜ Planned |
| v0.5.90 | Karma affecting mechanic NPC service availability | ⬜ Planned |
| v0.5.91 | Mechanic NPC currency cost tiers by service | ⬜ Planned |
| v0.5.92 | Vehicle repair tool spawns in garage locations | ⬜ Planned |
| v0.5.93 | Fuel pump interaction at petrol stations | ⬜ Planned |

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

### Acid Rain Event
| Version | Feature | Status |
|---|---|---|
| v0.6.17 | Remove contaminated zones from map | ⬜ Planned |
| v0.6.18 | Redistribute contaminated area loot to new locations | ⬜ Planned |
| v0.6.19 | Dynamic acid rain event manager | ⬜ Planned |
| v0.6.20 | Acid rain warning phase and radio announcement | ⬜ Planned |
| v0.6.21 | Warning phase 3 to 5 minutes before acid rain begins | ⬜ Planned |
| v0.6.22 | Acid rain damage for unprotected players | ⬜ Planned |
| v0.6.23 | NBC outfit full protection check during acid rain | ⬜ Planned |
| v0.6.24 | Gasmask required alongside NBC outfit for full protection | ⬜ Planned |
| v0.6.25 | Partial protection for incomplete NBC equipment | ⬜ Planned |
| v0.6.26 | Indoor and vehicle safety during acid rain | ⬜ Planned |
| v0.6.27 | Acid rain visual effects — green yellow tinted rain | ⬜ Planned |
| v0.6.28 | Acid rain audio effects — distinctive sound from normal rain | ⬜ Planned |
| v0.6.29 | Anti acid injector item as emergency short term protection | ⬜ Planned |
| v0.6.30 | NBC suit condition affecting protection level | ⬜ Planned |
| v0.6.31 | Acid rain duration and dispersal phase | ⬜ Planned |

### AI Bandit System
| Version | Feature | Status |
|---|---|---|
| v0.6.32 | AI bandit framework and base class | ⬜ Planned |
| v0.6.33 | Crash site AI guardian spawning | ⬜ Planned |
| v0.6.34 | Crash site AI patrol behaviour | ⬜ Planned |
| v0.6.35 | Crash site AI combat behaviour — cover, suppress, flank | ⬜ Planned |
| v0.6.36 | Crash site AI scaling to server population | ⬜ Planned |
| v0.6.37 | Crash site AI loot definitions | ⬜ Planned |
| v0.6.38 | Crash site AI despawn when site goes cold | ⬜ Planned |
| v0.6.39 | Roaming AI spawn manager | ⬜ Planned |
| v0.6.40 | Distance based spawn bubble per player | ⬜ Planned |
| v0.6.41 | Spawn probability by location type | ⬜ Planned |
| v0.6.42 | Spawn chance reduction near active zombies | ⬜ Planned |
| v0.6.43 | Global AI population cap | ⬜ Planned |
| v0.6.44 | AI population scaling by server population | ⬜ Planned |
| v0.6.45 | Roaming AI despawn when out of range | ⬜ Planned |
| v0.6.46 | Scavenger tier AI — civilian gear, basic weapons | ⬜ Planned |
| v0.6.47 | Bandit tier AI — military gear, rifles | ⬜ Planned |
| v0.6.48 | Veteran tier AI — high tier gear, suppressed weapons | ⬜ Planned |
| v0.6.49 | AI kills do not affect player karma | ⬜ Planned |
| v0.6.50 | Predator interaction with zombie hordes | ⬜ Planned |

### Additional Events
| Version | Feature | Status |
|---|---|---|
| v0.6.51 | Supply drop event | ⬜ Planned |
| v0.6.52 | Bandit camp event | ⬜ Planned |
| v0.6.53 | Survivor rescue event | ⬜ Planned |
| v0.6.54 | Event manager scheduling system | ⬜ Planned |

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
| v0.8.06 | Helicopter spawn locations on Chernarusplus | ⬜ Planned |
| v0.8.07 | Helicopter condition on spawn tuning | ⬜ Planned |
| v0.8.08 | Helicopter fuel system | ⬜ Planned |
| v0.8.09 | Helicopter repair requirements | ⬜ Planned |
| v0.8.10 | Helicopter sound radius values | ⬜ Planned |
| v0.8.11 | Helicopter crash behaviour | ⬜ Planned |

---

## v0.9 — Air Superiority
> *Armed Helicopters*

The most technically challenging milestone. Armed helicopters redefine the threat landscape and recreate one of the most iconic Epoch experiences.

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

The full Resurgence experience. A faithful and complete evolution of the classic DayZ mod era.

| Version | Feature | Status |
|---|---|---|
| v1.0.01 | Full Steam Workshop release | ⬜ Planned |
| v1.0.02 | Server setup documentation | ⬜ Planned |
| v1.0.03 | Player guide documentation | ⬜ Planned |
| v1.0.04 | Known issues documentation | ⬜ Planned |
| v1.0.05 | Community Discord established | ⬜ Planned |
| v1.0.06 | First stable public server running | ⬜ Planned |

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

## Beyond v1.0

Features under consideration for post release development:

- Additional outfit variants
- Additional helicopter variants including fixed wing aircraft
- Expanded trader inventories
- Seasonal events
- Additional map support including ChernarusA2 when available
- Expanded recipe system
- Advanced group and clan features
- Fishing system
- Advanced animal taming
- Community suggested features
- Quests and mission system expansion

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
