# Test Plan SpaceForm

This document describes the tests that will be performed for a game built with Unreal Engine 4.

It will provide instructions on how to reproduce the bugs and the environment in which they were found, on which platform, and with which hardware.

Since we are creating a game for PC, we will be testing the game on a Windows 10 machine and a Mac M1 machine.

There is also the [Test Report](Test%20Report.csv) that will contain a list of all the bugs found during the development process.

## Test report template

The test report is a csv file that contains the following information:
| Bug ID | Bug Description | Severity | Platform | Steps to reproduce | Actual result | Expected result | How to fix(if known) | Status |

Bug ID: The ID of the bug found
Bug Description: A short description of the bug
Severity: The severity of the bug is rated from 1 to 3
Platform: The platform on which the bug can be reproduced
Steps to reproduce: The steps to reproduce the bug
Actual result: The actual result of the bug
Excepted result: The expected result of the action
How to fix(if known): How to fix the bug if known
Status: The status of the bug (Fixed/Not Fixed)

### Severity level

| Severity | Description |
| --- | --- |
| 1 | The bug is a minor bug that does not affect the game's functionality |
| 2 | The bug is a major bug that affects the game's functionality but does not affect the game's core gameplay |
| 3 | The bug is a critical bug that affects the game's core gameplay |

It will be updated as we find new bugs and fix them during the development process.

On top of that, we will be using the [Bug Report Template](Bug%20Report%20Template.md) to report the bugs discovered directly on GitHub.

Also to simplify the process of finding reported bugs and their status for our development team, we will be using the [Test Report Analysis](./Test%20Report%20Analysis.ipynb) notebook to generate a table of all the bugs found and their status and it will be available in an online notebook viewer [here](https://colab.research.google.com/drive/1aK2gDs9vY5urSFTywPMcFIGaqm_NfsDr?usp=sharing).

## Table of Contents

<details>
<summary>
Click to expand
</summary>

- [Test Plan SpaceForm](#test-plan-spaceform)
  - [Test report template](#test-report-template)
    - [Severity level](#severity-level)
  - [Table of Contents](#table-of-contents)
  - [Requirements](#requirements)
    - [Compatibility Operating System](#compatibility-operating-system)
    - [Input Devices](#input-devices)
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

- [x] The game must be able to run on different platforms
  - [x] Windows
  - [x] Mac
  - [x] Nintendo Switch (on emulator)

The game fully runs on Windows and Mac os machines; however, we only tried to run it on a Nintendo Switch emulator and not on a real one.

### Input Devices

- [x] The user must be able to play with different input devices
  - [x] Keyboard and mouse
  - [x] Controller

The game fully supports keyboard and mouse and controller(PS4/5 and Xbox One) input.

### Colliders

- [x] All colliders must be working
  - [x] Test to no-clip the game
    - [x] Check if the player can no-clip through walls
    - [x] Check if the player can no-clip through the floor
    - [x] Check if the player can no-clip through the ceiling

All the colliders are working as intended and the player cannot no clip through walls, the floor, or the ceiling.

### Resolutions

- [ ] Check if the game supports different resolutions and aspect ratios
  - [x] 16:9
  ~~- [ ] 21:9~~
  ~~- [ ] 32:9~~
  ~~- [ ] 4:3~~
  - [x] 16:10
  - [x] 4840x2160
  - [x] 1920x1080
  - [x] 720x480

The game has multiple resolutions as long as it is a 16:9 or 16:10 aspect ratio.

We tried with 21:9, 32:9, and 4:3 aspect ratios and the game did not work as intended.

### Memory Leaks

- [x] Check the possible memory leaks
  - [x] Monitoring the memory usage of the game through the task manager/activity monitor
  - [x] Check if the memory usage is stable

The game can run for a long time without any memory leaks.

We took a snapshot of the memory usage at two different points in time and compared them to see what has changed, Since no actions were taken in the game, we expected similar memory usage regardless of the amount of time passed and that is what we got.

### Performance

- [x] Check the performance of the game with a given hardware
  - [x] Check the framerate
  - [x] Check the memory usage
  - [x] Check the CPU usage
  - [x] Check the GPU usage
    - [x] Check on a Mac M1 with no dedicated GPU
    - [x] Check on a Windows 10 machine with no GPU
    - [x] Check on a Windows 10 machine with a GPU

We tested the game on different machines with different hardware and the performance was good on all of them. The game ran at least at 60 fps on all of them.

For the CPU and GPU usage, we used the built-in tools for the [CPU](https://docs.unrealengine.com/4.27/en-US/TestingAndOptimization/PerformanceAndProfiling/CPU/) and this one for the [GPU](https://docs.unrealengine.com/4.27/en-US/TestingAndOptimization/PerformanceAndProfiling/GPU/), respectively.

### Audio

- [x] Check the game's audio 
  - [x] Check if the audio is working
    - [x] No audio
    - [x] Audio deformed
    - [x] Audio not synced with the game
    - [x] Wrong audio playing

All the audio is working as intended.

### Sound effects

- [x] Check the game's sound effects
  - [x] Check if the sound effects are working when they are supposed to
    - [x] No sound effects
    - [x] Sound effects deformed
    - [x] Sound effects not synced with the game
    - [x] Wrong sound effects playing

All the sound effects are working as intended, they are synced with their respective actions and they are not distorted.

### Graphics

- [x] Check the game's graphics
  - [x] No corrupted textures
  - [x] No overdrawn textures

All the textures are working as intended on all the platforms tested.

### Shaders

~~- [ ] Check the game's shaders~~
  ~~- [ ] Check if the shaders are working~~
    ~~- [ ] No shaders~~
    ~~- [ ] Shaders deformed~~
    ~~- [ ] Shaders not synced with the game~~
    ~~- [ ] Wrong shaders playing~~

We decided to not use shaders in our game.

### Lightning

- [x] Check the game's lightning
  - [x] Lightning is not flickering
  - [x] Lightning is not too bright / too dark 
  ~~- [ ] Lightning is changed properly when the player takes over an enemy~~
  - [x] Lightning is changed properly when the player goes back to its parasite form

The lighting is not flickering and it is not too bright or too dark. We decided to not keep the lightning change when the player takes over an enemy.

### Physics

- [x] Check the game's physics
  - [x] The player can jump
  - [x] The player can move
  - [x] The player can interact with the environment
  - [x] The player can interact with the enemies
  - [x] The player can interact with the objects
  - [x] The player can interact with the UI
- [x] The game has smooth physics
  - [x] The movements are not laggy

The player can perform all the actions listed above and the physics is smooth, we tested the physics by performing tests with players outside the project and they were able to like how the controls felt.

The UI(pause menu and main menu) are working as intended and the player can change his settings such as the resolution, fullscreen mode, or sound volume.

### Camera

- [x] Check the camera
  - [x] Check if the camera is working
  - [x] Check if the camera can follow the player
  ~~- [ ] Check if the camera can rotate with the player~~
  - [x] Does not display outside the level

The camera is working as intended and it can follow the player without any issues, we decided to not use any alien that affects the camera.

### UI

- [x] Check the game's UI
  - [x] Check if the UI is working
    ~~- [] Resolution should effectively change the UI~~
    - [x] Check if the UI is responsive to the player's input
    ~~- [ ] Check if the Sensitivity slider is working~~
    ~~- [ ] Check if the user can change its controls~~

Since we decided to lock the aspect ratio of the game to 16:9 and 16:10, we cut a lot of options from the UI, we decided to not let the player change its controls since we only have one control scheme.

### Enemies

- [x] Check the game's enemies
  - [x] If the enemies are moving properly
  - [x] If the player can take over the enemies
  - [x] If the player can go back to its parasite form
  ~~- [ ] If the player can take damage from the enemies~~

The enemies are moving properly and the player can take over them without any issues, we decided to not let the player die from the enemies.

### Death

- [x] Check the game's death
  - [x] If the player can die
  - [x] If the player respawns at the last checkpoint
  - [x] If the retry does not take too long to load

Everything related to the death is working as expected, the player can die and respawn at the last checkpoint as intended, and the retry is almost instant even on the lowest-end machines.

### Objects

- [x] Check the game's objects
  - [x] If the objects are moving properly
  - [x] If the player can interact with the objects

All the objects that are meant to move are moving properly and the player can interact as expected with them without any issues.

### Level

- [x] Check the game's level
  - [x] If the level redirects the player to the next level
  - [x] If the level is working properly

All the end-of-level triggers lead to the right level and the loading is almost instant no matter the machine or the level loaded.

### Save System

- [x] Check the game's save system
  - [x] If the player can save his progress
  - [x] If the player can load his progress
  - [x] If the player can delete his save
  - [x] If the player can load an already finished level

The save system is working as intended, the player can save and load his progress without any issues, and he can also delete his save if he wants to and load an already finished level.

For the following tests, since we are going to develop a game, we are going to let people play the game and see if they are having fun, check if for them the levels are well designed, and if they are not frustrated by the level progression.

We did 3 main playtests, one with a prototype of the game, one with a vertical slice of the game, and one with the definitive version of the game. We also did a lot of playtests with the sandbox level to test each feature of the game separately.

The following tests are filled with the results of the last playtest we did with the definitive version of the game.

### Checkpoints

- [x] Check the game's checkpoints
  - [x] If checkpoints have been placed properly
  - [x] If the player can respawn at the last checkpoint

The checkpoints are placed properly and the player can respawn easily, however, the mechanic of double pressing the reset button to respawn the whole level while pressing the reset button once to respawn at the last checkpoint is not intuitive and can lead to confusion.

### Level Design

- [x] Check the game's level design
  - [x] If the level is well designed
  - [x] If the level is well balanced
  - [x] If the level is well optimized

Most of the levels are considered "fun" by the testers, however, some of them are considered "too easy" for the first levels and start to get more difficult as the game progresses. The levels are well-balanced and optimized, the testers did not encounter any performance issues.

### Level Progression

- [x] Check if the progression of the level is working properly
  - [x] The user is not frustrated by the level of progression
  - [x] The user is not frustrated by the level of design
  - [x] The user is not frustrated by the level of difficulty

The testers did not encounter any issues with the level progression, they were not frustrated by the level design, the difficulty, or the progression.

Most of these tests are going to be done either on the definitive levels or on a sandbox level to test each feature of the game separately.

Unreal Engine also provides a lot of [tools](https://docs.unrealengine.com/4.26/en-US/TestingAndOptimization/) to monitor the game's performance, unit tests, stress tests, and so on. We are going to use these tools to check the proper functioning of the game.

We are also going to use a built-in script to check the response time from the user's input to the game's reaction.
