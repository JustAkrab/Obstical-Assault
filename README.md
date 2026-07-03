# Obstical Assault

A 2D/3D platformer game built in Unreal Engine 5, currently in early development.

## Overview

Obstical Assault is a platformer where the player navigates a level made up of different types of platforms and obstacles toward a goal line. The project is in an early, active-development stage: the core gameplay systems being built out are the goal line (level completion trigger) and a family of platform classes, each of which moves in a specific direction depending on its type (e.g. horizontal, vertical, or patrol-style movement).

## Status

Early-stage / work in progress. The project currently consists of the default Unreal Engine project scaffold (`ObstacalAssaultGameModeBase`) with module dependencies on `Core`, `CoreUObject`, `Engine`, and `InputCore`. Active development is focused on:

- Defining a goal line / level-end trigger
- Building out a `Platform` class hierarchy where each platform type has its own movement behavior (direction, speed, pattern)
- Level and obstacle design using imported art assets

## Engine & Tech

- **Engine:** Unreal Engine 5.0
- **Languages:** C++ (gameplay code), Blueprints (level/actor scripting, per standard UE workflow)
- **Plugins:** Quixel Bridge (for importing Megascans assets directly into the project)

## Project Structure

```
├── Source/ObstacalAssault/          # C++ gameplay code
│   ├── ObstacalAssault.Build.cs        # Module build rules (Core, CoreUObject, Engine, InputCore)
│   └── ObstacalAssaultGameModeBase.*     # Default game mode
├── Content/                           # Unreal assets: levels, blueprints, materials, meshes
├── Config/                             # Engine/game/input configuration (.ini files)
├── ObstacalAssault.uproject             # Unreal project file (Engine 5.0)
└── Link to Source Assets.txt             # External links to the source art kits used (see below)
```

## Assets

Source art comes from Epic's free Megascans asset packs, linked externally rather than committed to the repo (see `Link to Source Assets.txt`):

- **Games Kit** — general game-ready asset pack
- **Robotics Kit** — robot/sci-fi themed asset pack

## Getting Started

1. Install [Unreal Engine 5.0](https://www.unrealengine.com/) via the Epic Games Launcher.
2. Clone this repository.
3. Double-click `ObstacalAssault.uproject` (or right-click → "Generate Visual Studio project files" first if you plan to edit C++) to open the project in the Unreal Editor.
4. Download the source asset kits linked in `Link to Source Assets.txt` if you need the original, non-imported art files.

## Roadmap

- [ ] Implement the goal line / level-completion trigger
- [ ] Build out the `Platform` base class and per-type movement behaviors (direction, speed, patterns)
- [ ] Block out a first playable level
- [ ] Player character controls and collision/obstacle interactions

## Attribution

Built in Unreal Engine 5. Source art from Epic Games' Megascans "Games Kit" and "Robotics Kit" asset packs.
