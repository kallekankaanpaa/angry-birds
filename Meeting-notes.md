# Meeting Notes
In this file, you are required to take notes for your weekly meetings. 
In each meeting, you are required to discuss:

1. What each member has done during the week?
2. Are there challenges or problems? Discuss the possible solutions
3. Plan for the next week for everyone
4. Deviations and changes to the project plan, if any


# Meeting 02.11.2021 15:00

**Participants**: 
1. Kalle Kankaanpää
2. Jaakko Hintsala
3. Mikko Juusti
4. Sami Porio

## Summary of works
1. Kalle Kankaanpää
    - Drew architecture diagram and wrote about project structure
2. Mikko Juusti
    - Wrote about graphical user interface and drew few pictures
3. Jaakko Hintsala
    - Wrote about libraries we are going to use in the project
    - Wrote about testing
4. Sami Porio
    - Tested QT and SFML

## Challenges

1. We are not sure if we are going to use Qt.

## Actions
1. Sami and Mikko are going to check out Qt and SFML integration more so we can decide whether we are going to use Qt.
2. Jaako will learn more about Box2D
3. Kalle will create the basic project structure in git.

> Please reflect these action decisions in your git commit messages so that 
> your group members and advisor can follow the progress.

## Project status 
We almost finished the project plan during this meeting.

### TODOs
1. We will finish the project plan





# Meeting 23.11.2021 18:00

**Participants**: 
1. Kalle Kankaanpää
2. Jaakko Hintsala
3. Mikko Juusti
4. Sami Porio

## Summary of works
1. We configured the libraries and setup the cmake for all developers.

## Challenges

1. We have decided to not use Qt at all.

## Actions
1. Kalle Kankaanpää
    - Will develop the game logic and the interface between box2d and SFML
2. Mikko Juusti
    - Will create the slingshot mechanic and dive into the user menu creation
3. Jaakko Hintsala
    - Will look at the bird following camera mechanic
4. Sami Porio
    - Will look at the tranlations of SFML sprites and box2d physical bodies and study closer the physic simulations

## Project status 
The plan and cmake configuration is finished.

### TODOs
1. Start to develop the game using the tools (SFML and Box2D)




# Meeting 27.11.2021 08:00

**Participants**: 
1. Kalle Kankaanpää
2. Jaakko Hintsala
3. Mikko Juusti
4. Sami Porio

## Summary of works
1. We demo'd the features we all have been working on and merged them into master.

## Challenges

1. Creating levels

## Actions
1. Kalle Kankaanpää
    - Develop saving the levels
2. Mikko Juusti
    - Start building the graphcal UI
3. Jaakko Hintsala
    - Incorporate enemies
4. Sami Porio
    - Get to know levels and try building a level editor.

## Project status 
The graphics and physics are working. A good amount of features are merged in master. Many of the mechanics are working.

### TODOs
1. User interface
2. Take the gmae logic structure into use
3. Create levels (Level creator?)
4. Save levels





# Meeting 2.12.2021 14:00

**Participants**: 
1. Kalle Kankaanpää
2. Jaakko Hintsala
3. Mikko Juusti
4. Sami Porio

## Summary of works
1. Main menu graphics, new coordinate converter tools in utils namespace. Debugged code written last week. Resolved an issue with compiling the project. Destructable enemy class added and meged to master.

## Challenges

1. We are still tackling problems regarding level creation and saving.

## Actions
1. Come up with and create the special action bird, create a simple pig fortress.

## Project status 
Graphical interface is implemented. The slingshot mechanic with moving camera view is working. Basic game logic class structure has been established.

### TODOs
1. Create levels (Level creator?)
2. Save levels
3. Scoring system
4. High score system
5. Player nickname
6. Different kind of bird
7. Sound effects




# Meeting 10.12.2021 15:00

**Participants**: 
1. Kalle Kankaanpää
2. Jaakko Hintsala
3. Mikko Juusti
4. Sami Porio

## Summary of works
1. The starring system based on play performance added. Added advanced collision mechanics, now pigs die on wall collision and walls will break if hit hard enough. More graphics added when a level is cleared. 

## Challenges
1. Level creation and some high score mechanics are still being developed. 

## Actions
1. Finalize some graphics, fine tune high scores and create levels.

## Project status
The game is almost done. Intense testing and a lot of fine tuning is to be done. 

### TODOs
1. Create levels
2. Player nickname