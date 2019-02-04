/*
 * File:   CrazyRandomSword.cpp
 * Author: Elisa Wheaton <wheaton@cs.fsu.edu>
 *
 * Created on 2/3/19  10:49 PM
 */
 #include "CrazyRandomSword.h"
 #include <ctime>

double CrazyRandomSword::hit(double armor) {

    if(damage < 0)
        return 0;

    double randArmor = rand()%(int)(armor/3) + 2;
    //Ignores a random amount of integer armor points, ranging from to 2 to a
    //third of the armor the weapon hits.
    double damage = hitpoints - randArmor; //hitpoints = rand()%100+7

    return damage;
}
