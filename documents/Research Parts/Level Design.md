# Level Design - SpaceForm 

## Table of Contents

<details>
<summary> Click to expand </summary>

</details>

## Summary 

The design of the levels is a very important part of the game, we need to have as few details as possible to let the player have the best experience possible, and we need to ensure that the player will be focused on the game rather than the background or the environment. 

### Level design core principles

The core principles of each level are the following:

- Discover a new mechanic
- Practice it
- Apply an example of it with another alien 
- Use it with the already-known mechanic

We will divide the level by using pipes, when the player will enter a pipe at the end of one level he will be transported to the next one, the only exceptions to this rule are the first and the last level of the game, the first level will be the tutorial and the last level will be the boss fight. 

### Level design 

#### Lighting

The first levels are going to be bright, with a lot of light, and the player will be able to see everything in the normal form, we are not going to play with the light in the first levels, we will just use the light to make the player see the environment. 

Then the atmosphere will be darker and darker, and at the same time some aliens with different vision will appear, and some of them will not be able to see pretty well, 

Here is the list of the aliens with an altered vision:

Alien | Vision
---|---
Planner | Black and white
Wall jumper | Begative
Gravity guy | Inverted
Heavy guy | Echolocation 
Dasher | Blur outside of vision cone
Icy guy | Heat vision

#### Characters

The point of the characters is simple, you can take them over and use their abilities to access new areas and continue the level, 

List of the characters and their abilities:

Character | Ability
---|---
Parasite | Possession
Jumper | Jump
Grappler | Grappling
Planner | Planning
Wall jumper | Wall jump
Gravity guy | Gravity switch
Heavy | Break Wall
Slingshot | Throw itself
Dasher | Dash
Icy guy | Sliding / Frost

#### Information 

The game will be a 2D Side scroller the point is to go from the left of the level to the right in every level, in some levels the player will have to go back to the left to fetch a key or another item, but never in a previous level. 

The game will be linear the player will never be able to go back to a previous level. 

#### Story

The plot of the game will be briefly explained at the beginning of the game, we will also give some pieces of information between the levels to explain the story, and we will conclude it at the end after the boss fight.

The game is not about the story, the story is just a way to explain the game and the mechanics, the story is not the main focus of the game.

#### Worldbuilding

The game will take place in a spaceship, in a world not related to ours, the player will be able to see a couple of planets through the glasses of the spaceship, the point of this is to give the player a sense of scale, the player will be able to see how big the spaceship is and how small the planets are, to clearly explain why are there so many aliens in the spaceship.

We will also put stars into the levels as a bonus to push the player to explore the level, some stars will be hidden by the scrolling of the level, some of them are only going to be visible to certain aliens, and some of them will be hidden by the environment. 

### Level Design - Tutorial

The first level will be the tutorial, the player will be able to interact with the environment and the take-over mechanic. 

The level will be constructed as the following:

- The player enters as a parasite through the pipe, 
- The player is behind a "jumper" with a wall in front of him, 
- The player takes over the jumper and jump over the wall, 
- (Bonus) if the player jumps on the wall he will be able to jump a second time to reach a star,
- The player sees a "planer" with a hole in front of him, 
- The player takes over the planner and plan to the other side of the hole,
- (fail) if the player fails to plan he will fall into the hole and respawn at the beginning of the level, 


### Level Design - Goals

The goal of each level is to teach the player new mechanics, entertain him by giving him a challenge and a feeling of progression, Immerse him into the world and the story with the SFX and the music, be varied in the experience and the level design, and finally, the game needs to be fun. 

### Level Design - Rules 

The rules of the level design are the following:

- The player must be satisfied with the mechanics and the level design, his movements must be fluid and the level must be fun to play, 
- Take into consideration the metrics, the jump mechanics should be sufficient to not be "pixel perfect", the platforms width should be big enough, movement speeds, and so on,
- Rhythm and pacing, the purpose of the game is to entertain the player with a fast-paced game, if at any point we reduce the speed of the game we need to make sure that the player is not bored, 
- For the difficulty curve we will follow the "flow" theory, the player will be able to learn the mechanics and practice them, then he will be able to apply them in a more complex situation, then he will be able to use them in a more complex situation, and so on.
- Save, the game will have checkpoints at the end of each level, the player will be able to save his progress at any time and quit the game, the game will also have a "continue" option,
- Putting achievements in the game is not a priority, but it is doable for some precise actions, such as collecting all stars or completing the game without dying. 

### Level design - Rewards 

The player will be rewarded with finding every star in the level, unlocking a new secret level at the end of the game, and unlocking new characters, he will also be rewarded with the feeling of progression and possible achievements.

### Level Design - Camera

As said earlier the camera will scroll and follow the player, the camera will change depending on the alien the player is using. 

### Game visual hierarchy

The visual hierarchy of the game is the following:

- The player
- The Enemies
- The environment (background, foreground, etc) 
- The UI (timer)
