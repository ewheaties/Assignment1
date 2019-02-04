/*
 * File:   SimpleHammer.cpp
 * Author: Elisa Wheaton <wheaton@cs.fsu.edu>
 *
 * Created on 2/3/19  9:54 PM
 */
 #include "SimpleHammer.h"
 double CommonSword::hit(double armor){
     double damage;

     if(armor < 30)
       damage = hitpoints;

     if(damage < 0)
       damage = 0;

     else
       damage = hitPoints - armor;
     
     return damage;
 }
