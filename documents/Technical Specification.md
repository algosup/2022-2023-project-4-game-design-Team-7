# Technical Specifications Spaceform

## Glossary
- [Technical Specifications Spaceform](#technical-specifications-spaceform)
  - [Glossary](#glossary)
  - [I. General](#i-general)
  - [II. Game Design](#ii-game-design)
  - [III. External Assets](#iii-external-assets)
  - [IV. Unreal Engine 4](#iv-unreal-engine-4)
    - [Blueprint](#blueprint)
    - [Restrictions due to 2D](#restrictions-due-to-2d)
  - [V. Unreal Engine Licenses](#v-unreal-engine-licenses)
  - [VI. Requirements](#vi-requirements)
  - [VII. Future Plans](#vii-future-plans)
  - [VIII. Performance](#viii-performance)
    - [Scalability:](#scalability)
    - [Reliability:](#reliability)
  - [IX. Security:](#ix-security)
  - [X. Software:](#x-software)
    - [Game Engine:](#game-engine)
    - [Graphics editor:](#graphics-editor)
    - [Audio editor:](#audio-editor)
  - [XI. Functionalities:](#xi-functionalities)
  - [XII. Game Species Specifics:](#xii-game-species-specifics)
  - [XIII. Features and technical descriptions:](#xiii-features-and-technical-descriptions)

## I. General

The game will be a 2D platformer game in pixel art with teenagers and young adultsas its audience, the game will have a PEGI 12+ rating.
It will be developed using Unreal Engine 4.27.
The game will follow all laws and regulations involved in the creation of a video game.
The game is about a parasite in a spaceship that can take over the bodies of aliens to gain abilities.
The player will have to take over aliens to solve puzzles and reach the end of the level.

## II. Game Design

The gameplay will be the main focus of the game, with an emphasis on the learning curve of the game.
The design of the game should be made of tiles sized 64x64 pixels.
THe style of the game is futuristic, with a sci-fi theme.
The sound design will be minimalistic, with a focus on the music.

## III. External Assets

No external assets with licences will be used to avoid copyright issues.

## IV. Unreal Engine 4

The Blueprint programming system in Unreal Engine 4 will be utilized.
The Unreal Engine 4 official documentation and courses on game design and development will be used as primary sources of information.
The global Unreal Engine forum is to be used to find the most optimised ways of doing.

### Blueprint

Blueprint is a visual scripting system that allows for rapid prototyping and iteration.
It has a node-based system that allows for easy creation of gameplay mechanics.
The white arrow is used to connect execution pins and the rounded pins are used to connect data pins.
The nodes are organized into categories, which are used to find the desired node.
To get the right type the system sort the results so if you are not sure what type you need you can just click on the node and it will show you the types it can be connected to.

### Restrictions due to 2D

The game will be in 2D, which means that the player will not be able to move in 3D space.
The unreal is meant for 3D games, so some of the nodes will not work in 2D.
the player should be a paper 2D sprite or an actor pawn with a 2D sprite as a child.

A custom script will be needed to make animated 2d tiles.

## V. Unreal Engine Licenses

The game will be developed using Unreal Engine 4.27, which is free to use.


## VI. Requirements

Unreal Engine 4.27 and fine tuned mechanics are the only requirement for the project.
Tasks should prioritize qualitative mechanics over a large quantity of them.

## VII. Future Plans

The game will be made available on other platforms such as Linux, Mac OS, and Nintendo Switch in the future. To sell it, an account on itch.io will be created.

## VIII. Performance

The game should run smoothly on a minimum requirement computer with a resolution of 1280x720 pixels and a refresh rate of 60Hz.
The game should not have any lag or delay during gameplay. To do so, the game should be optimized to run at 60 frames per second and minimize the number of tracked objects.
The game should load fast and not have long loading times.


### Scalability:

The platform should not impede the game from running smoothly.

### Reliability:

The game should not crash or have any bugs during gameplay. To do so, the game should be tested thoroughly and have a bug tracking system monitored by the QA team and a bug tracker in the form of a csv file should be kept.

A restriction on the number of inputs available to the player should be implemented to avoid unexpected inputs.

## IX. Security:

The game should not have any security vulnerabilities that could harm the user or their device.
The game should not collect any personal or sensitive information from the user.


## X. Software:

### Game Engine:

Unreal Engine 4.27 will be used for the development of the game.
Language:

The game will be developed using Blueprint visual scripting in Unreal Engine.
Platform:

The game will first be developed for Windows before any other platform.

### Graphics editor:

Pixel Studio will be used to create the pixel art assets for the game.
This software is free to use and has a simple interface that allows for easy creation of pixel art sprites and drawings.

### Audio editor:

Sounds will be fetched from free to use sources that do not need attribution like some sounds in freesound.org.


## XI. Functionalities:

The game starts with the menu screen, which will have options for Play, Options, Credits, Scoreboard, and Quit.
- The Quit option will close the game.
- The Options option will open a menu with adjustable settings for volume, fullscreen, resolution, and language.
- The Credits option will open a menu with the names of the developers.
- The Scoreboard option will open a menu with the top timers.
- The Play option will start the game with the first level.
- At the end of a level the player will be sent to the next level after a small peek at his time.

The inputs should be ZQSD / WASD / Arrow keys for movement, Space for jump, right click for the parasite throw, and left click for species specific ability.

## XII. Game Species Specifics:

here is a list of the species that will be in the game and their abilities.

[Species Specifications](https://docs.google.com/spreadsheets/d/19qRGx0SFPaTOHf04cnJs4SdGVmXDKTO3_Sj5BQFv2pw/edit?usp=sharing)

## XIII. Features and technical descriptions:

| Feature | Description |
| --- | --- |
| Menu | The game will have a menu screen with options for Play, Options, Credits, Scoreboard, and Quit. |
| Play | The Play option will start the game with the first level. |
| Options | The Options option will open a menu with adjustable settings for volume, fullscreen, resolution, and language. |
| Volume | The volume option will allow the player to adjust the volume of the game through a slider. |
| Fullscreen | The fullscreen option will allow the player to toggle fullscreen on and off. |
| Resolution | The resolution option will allow the player to adjust the resolution of the game through multiple button with sizes |
| Language | The language option will allow the player to change the language of the game through a dropdown menu. It will not matter in a game and is more of a fun troll so any will do |
| Credits | The Credits option will open a menu with the names of the developers. |
| Scoreboard | The Scoreboard option will open a menu with the top timers. |
| Quit | The Quit option will close the game. |
| Level | The game will have multiple levels that the player will have to complete to win the game. |
| Tutorel | The tutorial level will be a short tutorial level that will teach the player the basics of the game. It will only feature the parasite as controllable character. The jumper is a non-controllable/reachable character that will be used to teach the player that an alien has the ability to jump. |
| Level 1 | The first level will be a level that will teach the player how to take over an alien. The player will have to take over the jumper to reach the end of the level. It should feature easily passable platforms progressively harder to reach with no penalty upon falling. |
| Level 2 | The second level is a slightly harder version of the first level. It will feature the same platforms but holes will be added in between them. It should then finish with a platform that is too high to reach without throwing the worm |
| Level 3 | The third level will be a level that will teach the player about lasers. The player will have to take over the jumper to reach the end of the level. It should contain sparsely placed lasers that will kill the player upon contact.  |
| Level 4 | The fourth level is the final confirmaion level. It will feature all the previous mechanics and will be a harder version. It should contain lasers and holes in a large number. the worm throwing should be used a decent amount of times and not only for high places but also to reach platforms that are too far away at the bottom. |
| Level 5 | The fifth level shows a new alien, the slingshot. It will be a level that will teach the player how to use the slingshot. The player should start with a jumper as usual but rapidly be limited and find the slingshot. It should contain far away platforms and saws that will kill the player upon contact. |
| Level 6 | The sixth level is a slightly harder version of the fifth level. It will feature harder jumps and more saws. |
| Level 7 | The seventh level will be a level that will confirm the player's ability to use the slingshot. It should contain lasers, saws, jumpers and platforms. |
| Level 8 | The eighth level is an introduction to the gravity guy. It will be a level that will teach the player how to use the gravity guy. The platforms should be separated by vertical walls with the follow up of the level unreachable to any other character. The player should start with a jumper or a slingshotbut rapidly be limited and find the gravity guy. No mortal traps should be placed but holes should appear starting half the level. |
| Level 9 | The ninth level is a harder version of the eighth level. The vertical walls should be replaced by saws and some vicious traps should be added. |
| Level 10 | The tenth level will be a level that will confirm the player's ability to use the gravity guy. It should contain lasers, saws, jumpers and platforms. The pace should be faster than the previous levels to break the player's habits. |