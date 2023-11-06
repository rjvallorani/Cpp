# UnrealEngineCPP

# Unreal Engine C++ Code Repository

This repository contains Unreal Engine C++ code for various classes that can be used in game development. The classes included are a floating actor, a light switch, a blueprintable light switch, a custom projectile, and an exploding barrel.

## Classes

### Floating Actor

The `FloatingActor` class is an actor that hovers above the ground. It provides a basic floating effect by applying a periodic force to counteract gravity. This class can be extended and customized to create objects that exhibit floating behavior in your game world.

### Light Switch

The `LightSwitch` class represents a switch that can toggle the state of a light source in your game. It provides a simple interface to control the light's visibility or intensity. This class can be used to create interactive light switches that add dynamics to your game environment.

### Blueprintable Light Switch

The `BlueprintableLightSwitch` class is an extension of the `LightSwitch` class, allowing it to be easily customized and controlled through Blueprints in Unreal Engine. It exposes editable properties and events that can be accessed and manipulated directly in the Blueprint editor. This class provides a flexible solution for creating interactive light switches without writing additional C++ code.

### Exploding Barrel

The `ExplodingBarrel` class represents a barrel that explodes when triggered. It demonstrates how to create objects with dynamic behavior, such as explosive effects and damage propagation. This class can be used to create interactive and destructible elements in your game world.

### Custom Projectile

The `CustomProjectile` class represents a projectile that can be fired from weapons in your game. It handles the movement and collision detection of the projectile, allowing it to interact with other actors in the game world. This class can be customized to implement specific projectile behaviors, such as damage calculations or visual effects.


## Acknowledgements

- [Unreal Engine](https://www.unrealengine.com/) - The game engine used for development.
