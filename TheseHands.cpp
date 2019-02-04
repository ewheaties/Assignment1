/*
 * File:   TheseHands.cpp
 * Author: Elisa Wheaton <wheaton@cs.fsu.edu>
 *
 * Created on 2/3/19  11:21 PM
 */

 #include "Weapon.h"

 //hitpoints = 10
 //damage = hitpoints + armor

 double TheseHands::hit(double armor){
     double damage = hitPoints + armor;
     if(damage < 0){
         return 0;
     }
     return damage;
