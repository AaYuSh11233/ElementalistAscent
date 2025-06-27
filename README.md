# 🌿 Elemental Ascent: Legacy of the Forest

> **A AAA-rated stylized anime-style RPG built entirely in C++ using Unreal Engine 5.5.4**

## 🎮 Game Overview

**Elemental Ascent: Legacy of the Forest** is an immersive medieval jungle RPG where players embark on an epic elemental journey as **Ray**, a hero destined to defeat 5 powerful bosses and absorb their elemental powers. Set in a mystical world filled with ancient magic and dangerous creatures, this skill-based adventure features full XP/level progression and dynamic power unlock systems.

### 🎯 Key Features

- **🗡️ Skill-Based Combat**: Fluid melee combat with elemental power integration
- **🌟 Elemental Powers**: Master Fire, Ice, Earth, Wind, and Shadow abilities
- **📈 Progression System**: Dynamic XP/leveling with power unlocks tied to boss defeats
- **🎒 Inventory Management**: Comprehensive item collection and management system
- **🌍 Immersive World**: 150-180GB of high-fidelity assets and GPU-heavy post-processing
- **🎨 Anime Art Style**: Stylized visuals with cinematic presentation

## 🛠️ Technical Specifications

| Specification | Details |
|---------------|---------|
| **Engine** | Unreal Engine 5.5.4 |
| **Language** | C++ (Clean OOP Architecture) |
| **Platform** | PC Only |
| **Target Size** | 150-180 GB |
| **Graphics** | GPU-Heavy Post-Processing |
| **Assets** | High-Fidelity UE Marketplace Assets |

## 🏗️ Project Architecture

### Core Systems (Phase 1 - ✅ Complete)

```
ElementalistAscent/
├── Source/ElementalistAscent/
│   ├── PlayerHero.h/.cpp           # Main character controller
│   ├── Components/
│   │   ├── SwordComponent.h/.cpp   # Melee combat system
│   │   ├── InventoryComponent.h/.cpp # Item management
│   │   └── ElementalPowerComponent.h/.cpp # Elemental abilities
│   └── ElementalTypes.h            # Core enumerations
```

#### 🦸 APlayerHero
- Third-person anime-styled protagonist "Ray"
- Movement, jumping, attacking mechanics
- XP gain and level progression system
- Elemental power integration

#### ⚔️ USwordComponent
- Raycast-based hit detection
- Damage calculation and application
- Debug visualization for testing
- Expandable for VFX integration

#### 🎒 UInventoryComponent
- Dynamic item addition and storage
- Herb, food, and collectible management
- Blueprint-accessible interface

#### 🔥 UElementalPowerComponent
- Power unlock/activation system
- Support for all 5 elemental types
- Modular design for VFX expansion

#### 🌟 ElementalTypes.h
- Comprehensive enum system
- Defines: Fire, Ice, Wind, Earth, Shadow powers
- Blueprint-compatible structure

## 🎮 Controls

| Input | Action | Status |
|-------|--------|--------|
| **W/A/S/D** | Movement | ✅ Implemented |
| **Mouse** | Camera Look | ✅ Implemented |
| **LMB** | Sword Attack | ✅ Implemented |
| **1-5** | Elemental Powers | ✅ Implemented |
| **E** | Interact | 🔄 Planned |
| **Shift** | Dash | 🔄 Planned |

## 🚀 Getting Started

### Prerequisites

- **Unreal Engine 5.5.4** or later
- **Visual Studio 2022** with C++ development tools
- **Windows 10/11** (64-bit)
- **16GB+ RAM** recommended
- **High-end GPU** for optimal performance

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/AaYuSh11233/ElementalistAscent.git
   cd ElementalistAscent
   ```

2. **Generate project files**
   ```bash
   # Right-click on ElementalistAscent.uproject
   # Select "Generate Visual Studio project files"
   ```

3. **Build the project**
   ```bash
   # Open ElementalistAscent.sln in Visual Studio
   # Build Solution (Ctrl+Shift+B)
   ```

4. **Launch the editor**
   ```bash
   # Open ElementalistAscent.uproject
   # Or launch from Visual Studio (F5)
   ```

## 🎯 Development Roadmap

### ✅ Phase 1: Core Systems (Complete)
- [x] Player character implementation
- [x] Basic combat system
- [x] Inventory management
- [x] Elemental power framework
- [x] Input system setup

### 🔄 Phase 2: World & AI (In Progress)
- [ ] **BossMob** system with power unlock mechanics
- [ ] **HerbActor** & **AnimalActor** for XP sources
- [ ] **GameQuestManager** for boss tracking
- [ ] Advanced AI behavior trees

### 🔮 Phase 3: UI & Polish (Planned)
- [ ] Health bar and XP gauge
- [ ] Elemental power wheel interface
- [ ] Inventory UI system
- [ ] Main menu and settings

### 🎨 Phase 4: Visual Effects (Planned)
- [ ] Niagara particle systems for elemental powers
- [ ] Combat VFX and animations
- [ ] Environmental effects
- [ ] Cinematic sequences

### 🌍 Phase 5: World Building (Planned)
- [ ] Stylized forest environments
- [ ] Firelands and Sky Islands
- [ ] Boss arenas and dungeons
- [ ] Interactive world elements

## 🎨 Asset Pipeline

### Planned Asset Integration
- **🌲 Environments**: Stylized Forest, Firelands, Sky Islands
- **✨ VFX**: Free magic particle systems from UE Marketplace
- **🎨 UI**: Anime-style UI kits and components
- **🐅 Characters**: High-resolution animal and boss models
  - Kong (Earth Boss)
  - Tiger (Fire Boss)  
  - Phoenix (Wind Boss)
  - Ice Elemental (Ice Boss)
  - Shadow Wraith (Shadow Boss)

## 🧠 Code Style Guide

This project follows strict C++ and Unreal Engine conventions:

### Naming Conventions
- **Classes**: PascalCase with appropriate prefixes (`APlayerHero`, `UInventoryComponent`)
- **Variables**: camelCase for local, PascalCase for members
- **Functions**: PascalCase (`MoveForward`, `GainXP`)
- **Enums**: PascalCase with descriptive names (`EElementalPower`)

### Architecture Principles
- **Modular Components**: Each system is self-contained and reusable
- **Blueprint Integration**: All components support Blueprint extension
- **Clean OOP**: Proper encapsulation and inheritance hierarchies
- **Performance First**: Optimized for AAA-quality performance

### Code Example
```cpp
// Clean component initialization
APlayerHero::APlayerHero()
{
    PrimaryActorTick.bCanEverTick = true;
    
    Inventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
    ElementalPowers = CreateDefaultSubobject<UElementalPowerComponent>(TEXT("ElementalPowers"));
    Sword = CreateDefaultSubobject<USwordComponent>(TEXT("Sword"));
}
```

### Development Workflow
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Follow our code style guide
4. Test your changes thoroughly
5. Submit a pull request with detailed description

### Reporting Issues
- Use the [Issue Tracker](https://github.com/AaYuSh11233/ElementalistAscent/issues)
- Provide detailed reproduction steps
- Include system specifications and logs

## 📊 Current Implementation Status

### ✅ Completed Components

**APlayerHero** - Main character controller
- Movement system (WASD + Mouse look)
- XP/Level progression
- Component integration
- Input handling

**USwordComponent** - Melee combat system
- Raycast hit detection
- Damage application (20 damage per hit)
- Debug visualization
- 150 unit attack range

**UInventoryComponent** - Item management
- Dynamic item addition
- Quantity stacking
- Blueprint accessibility
- Expandable for UI integration

**UElementalPowerComponent** - Power system
- Power unlock/lock mechanics
- Activation system with debug output
- Support for all 5 elemental types
- Modular architecture

**ElementalTypes.h** - Core definitions
- Complete elemental enum (None, Earth, Ice, Fire, Wind, Shadow)
- Blueprint-compatible structure
- Extensible design

## 🔧 Technical Implementation Details

### Memory Management
- Proper use of `CreateDefaultSubobject<>` for component initialization
- UPROPERTY macros for garbage collection
- Blueprint integration via `BlueprintType` and `BlueprintReadOnly`

### Performance Considerations
- Efficient raycast implementation for combat
- Optimized inventory search with early returns
- Component-based architecture for modularity
- Tick optimization (disabled where unnecessary)

### Debugging Features
- Visual debug lines for sword attacks
- On-screen debug messages for elemental powers
- Comprehensive logging system
- Developer-friendly error handling

## 🙏 Acknowledgments

- **Epic Games** for Unreal Engine 5
- **UE Marketplace Contributors** for high-quality assets
- **Community** for feedback and support
- **Open Source Libraries** used in development

## 📞 Contact & Support

**This project desperately needs talented team members!** If you're passionate about game development and want to work on an ambitious AAA-style RPG, we want to hear from you.

- **Developer**: [AaYuSh11233](https://github.com/AaYuSh11233)
- **Repository**: [ElementalistAscent](https://github.com/AaYuSh11233/ElementalistAscent)
- **Issues**: [Bug Reports & Feature Requests](https://github.com/AaYuSh11233/ElementalistAscent/issues)

---

<div align="center">

**🌟 Star this repository if you find it interesting or if you want to see the final product! 🌟**

*Built with ❤️ using Unreal Engine 5 and C++*

**[⭐ Star](https://github.com/AaYuSh11233/ElementalistAscent) • [🍴 Fork](https://github.com/AaYuSh11233/ElementalistAscent/fork) • [📝 Issues](https://github.com/AaYuSh11233/ElementalistAscent/issues)**

</div>
```

