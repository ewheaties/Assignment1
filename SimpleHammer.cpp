/*
 * File:   SimpleHammer.cpp
 * Author: Elisa Wheaton <wheaton@cs.fsu.edu>
 *
 * Created on 2/3/19  9:54 PM
 */

 //hitpoints = 25. If the armor is less than 30, the hammer
 //will ignore all the armor points

 #include "SimpleHammer.h"
 double SimpleHammer::hit(double armor){
     double damage;

     if(armor < 30) // if armor is less than 30, ignore hitpoints
       damage = hitpoints;

     if(damage < 0) //if damage is an invalid input
       damage = 0;

     else //default behavior of weapon
       damage = hitPoints - armor;

     return damage;
 }
