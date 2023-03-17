# Test Plan SpaceForm

This document describes the tests that will be performed for a game built with Unreal Engine 4. 

It will provide instructions on how to reproduce the bugs and the environment in which they were found, on which platform and with which hardware.

Since we are creating a game for PC, we will be testing the game on a Windows 10 machine and a Mac M1 machine.

There is also the [Test Report](Test%20Report.csv) that will contain a list of all the bugs found during the development process.

On top of that, we will be using the [Bug Report Template](Bug%20Report%20Template.md) to report the bugs discovered directly on github.

## Table of Contents
<details>
<summary>
Click to expand
</summary>

- [Test Plan SpaceForm](#test-plan-spaceform)
  - [Table of Contents](#table-of-contents)
  - [Requirements](#requirements)
    - [Compatibility Operating System](#compatibility-operating-system)
    - [Input Devices](#input-devices)
    - [Input](#input)
    - [Colliders](#colliders)
    - [Resolutions](#resolutions)
    - [Memory Leaks](#memory-leaks)
    - [Performance](#performance)
    - [Audio](#audio)
    - [Sound effects](#sound-effects)
    - [Graphics](#graphics)
    - [Shaders](#shaders)
    - [Lightning](#lightning)
    - [Physics](#physics)
    - [Camera](#camera)
    - [UI](#ui)
    - [Enemies](#enemies)
    - [Death](#death)
    - [Objects](#objects)
    - [Level](#level)
    - [Save System](#save-system)
    - [Checkpoints](#checkpoints)
    - [Level Design](#level-design)
    - [Level Progression](#level-progression)

</details>

## Requirements

### Compatibility Operating System
The following requirements are to be tested:
- [ ] The game must be able to run on different platforms
  - [ ] Windows
  - [ ] Mac

### Input Devices
- [ ] The user must be able to play with different input devices
  - [ ] Keyboard and mouse
  - [ ] Controller

### Input 

### Colliders
- [ ] All colliders must be working
  - [ ] Test to noclip the game 
    - [ ] Check if the player can noclips through walls 
    - [ ] Check if the player can noclip through the floor
    - [ ] Check if the player can noclip through the ceiling

### Resolutions
- [ ] Check if the game supports different resolutions and aspect ratios
  - [ ] 16:9
  - [ ] 21:9
  - [ ] 32:9
  - [ ] 4:3
  - [ ] 16:10
  - [ ] 4840x2160
  - [ ] 1920x1080
  - [ ] 720x480

### Memory Leaks
- [ ] Check the possible memory leaks
  - [ ] Monitoring the memory usage of the game through the task manager
  - [ ] Check if the memory usage is stable 

### Performance
- [ ] Check the performance of the game with a given hardware
  - [ ] Check the framerate
  - [ ] Check the memory usage
  - [ ] Check the CPU usage
  - [ ] Check the GPU usage
    - [ ] Check on a Mac M1 with no dedicated GPU
    - [ ] Check on a Windows 10 machine with no GPU <!-- TODO: Add pc Specs -->
    - [ ] Check on a Windows 10 machine with a GPU 

### Audio
- [ ] Check the game's audio 
  - [ ] Check if the audio is working 
    - [ ] No audio
    - [ ] Audio deformed
    - [ ] Audio not synced with the game
    - [ ] Wrong audio playing

### Sound effects 
- [ ] Check the game's sound effects
  - [ ] Check if the sound effects are working with the 
    - [ ] No sound effects
    - [ ] Sound effects deformed
    - [ ] Sound effects not synced with the game
    - [ ] Wrong sound effects playing

### Graphics
- [ ] Check the game's graphics
  - [ ] No corrupted textures  
  - [ ] No overdrawn textures

### Shaders
- [ ] Check the game's shaders
  - [ ] Check if the shaders are working
  - [ ] Check if the shaders are working with the 
    - [ ] No shaders
    - [ ] Shaders deformed
    - [ ] Shaders not synced with the game
    - [ ] Wrong shaders playing

### Lightning 

- [ ] Check the game's lightning 
  - [ ] Lightning is not flickering
  - [ ] Lightning is not too bright / too dark 
  - [ ] Lightning is changed properly when the player takes over an enemy
  - [ ] Lightning is changed properly when the player goes back to its parasite form   

### Physics
- [ ] Check the game's physics
  - [ ] Check if the player can jump
  - [ ] Check if the player can move
  - [ ] Check if the player can interact with the environment
  - [ ] Check if the player can interact with the enemies
  - [ ] Check if the player can interact with the objects
  - [ ] Check if the player can interact with the UI
- [ ] The game has smooth physics 
  - [ ] The movements are not laggy

### Camera
- [ ] Check the camera
  - [ ] Check if the camera is working 
  - [ ] Check if the camera can follow the player
  - [ ] Check if the camera can rotate with the player
  - [ ] Does not display outside the level

### UI
- [ ] Check the game's UI
  - [ ] Check if the UI is working
    - [ ] Resolution should effectively change the UI
    - [ ] Check if the UI is responsive to the player's input
    - [ ] Check if the Sensitivity slider is working 
    - [ ] Check if the user can change its controls 

### Enemies
- [ ] Check the game's enemies
  - [ ] If the enemies are moving properly
  - [ ] If the player can take over the enemies 
  - [ ] If the player can go back to its parasite form 
  - [ ] If the player can take damage from the enemies

### Death
- [ ] Check the game's death
  - [ ] If the player can die
  - [ ] If the player respawns at the last checkpoint
  - [ ] If the retry does not take too long to load

### Objects
- [ ] Check the game's objects
  - [ ] If the objects are moving properly
  - [ ] If the player can interact with the objects

### Level
- [ ] Check the game's level
  - [ ] If the level redirects the player to the next level
  - [ ] If the level is working properly

### Save System
- [ ] Check the game's save system
  - [ ] If the player can save his progress
  - [ ] If the player can load his progress


For the following tests, since we are going to develop a game, we are going to let people play the game and see if they are having fun, check if for them the levels are well designed, and if they are not frustrated by the level progression. 

### Checkpoints
- [ ] Check the game's checkpoints
  - [ ] If checkpoints have been placed properly 
  - [ ] If the player can respawn at the last checkpoint

### Level Design
- [ ] Check the game's level design
  - [ ] If the level is well designed
  - [ ] If the level is well balanced
  - [ ] If the level is well optimized

### Level Progression
- [ ] Check if the progression of the level is working properly
  - [ ] The user is not frustrated by the level progression
  - [ ] The user is not frustrated by the level design
  - [ ] The user is not frustrated by the level difficulty

Unreal Engine also provides a lot of [tools](https://docs.unrealengine.com/4.26/en-US/TestingAndOptimization/) to monitor the game's performance, unit tests, stress tests and so on. We are going to use these tools to check the proper functioning of the game. 

We are also going to use a built-in script to check the response time from the user's input to the game's reaction.

