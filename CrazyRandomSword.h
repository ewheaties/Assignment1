/*
 * File:   CrazyRandomSword.cpp
 * Author: Elisa Wheaton <wheaton@cs.fsu.edu>
 *
 * Created on 2/3/19  10:49 PM
 */
 #include <string>
 #include "Weapon.h"

 #ifndef CRAZYRANDOMSWORD_H
 #define CRAZYRANDOMSWORD_H

/*
hitpoints = random integer number between 7 and
100. Ignores a random amount of integer armor points, ranging from to 2 to a third of
the armor the weapon hits.
*/

class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("CrazyRandomSword", rand()%100+7) //Calls Weapon(name, hitpoints) constructor with values Common Sword and 50.0
    {
      srand((unsigned int)time(NULL)); //seed for random number is NULL so the seed is always changing
      hitPoints = rand()%100+7;
    }

    virtual ~CommonSword() {};

    virtual double hit(double armor);

};

 #endif /* CRAZYRANDOMSWORD_H */
