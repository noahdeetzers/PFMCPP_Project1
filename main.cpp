#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: cow
//  action 1: The cow grabs grass
cow.grabsGrass();
//  action 2: The cow chews the grass
cow.chewsGrass();
//  action 3: The cow poops grass
cow.poopsGrass();
 
//  2)
//  Noun: Tree
//  action 1: It grows branches
tree.growsBranches();
//  action 2: It loses its leaves
tree.losesLeaves();
//  action 3: It dies
tree.dies();

//  3)
//  Noun: musician
//  action 1: The musician drinks beer
musician.drinksBeer();
//  action 2: the musiscian shows up late
musician.showsUpLate();
//  action 3: he plays the wrong notes
musician.playsWrongNotes();

//  4)
//  Noun: cat
//  action 1: The cat drinks milk
cat.drinksMilk();
//  action 2: The cat claws the human
cat.clawsHuman();
//  action 3: The cat eats catnip
cat.eatsCatnip();
//  5)
//  Noun: porkupine
//  action 1: The porkupine grows spikes
porkupine.growsSpikes();
//  action 2: The porkupine pricks the human
porkupine.pricksHuman();
//  action 3: The porkupine eats the strawberry
porkupine.eatsStrawberry();
 
//  6)
//  Noun: child
//  action 1: The child plays with a ball
child.playsWithBall();
//  action 2: The child spills food
child.spillsFood();
//  action 3: The child smiles
child.smiles();

//  7)
//  Noun: pilot
//  action 1: The pilot starts up the plane
pilot.startsPlane();
//  action 2: The pilot flies the plane
pilot.fliesPlane();
//  action 3: The pilot crashes the plane
pilot.crashesPlane();

//  8)
//  Noun: washingMachine
//  action 1: It washes clothes
washingMachine.washesClothes();
//  action 2: It dispenses soap
washingMachine.dispensesClothes();
//  action 3: The washing machine bleaches the clothes
washingMachine.bleachesClothes();

//  9) 
//  Noun: chef
//  action 1: The chef makes the ramen
chef.makesRamen();
//  action 2: The chef cuts his finger
chef.cutsFinger();
//  action 3: the chef chops the carrots
chef.chopsCarrots();
 
//  10) 
//  Noun: Server
//  action 1: The server serves the meal
server.servesMeal();
//  action 2: The server counts the tip
server.countsTip();
//  action 3: The server thanks the guest
server.thanksGuest();
 


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
