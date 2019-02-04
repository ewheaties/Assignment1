/*
 * File:   TheseHands.h
 * Author: Elisa Wheaton <wheaton@cs.fsu.edu>
 *
 * Created on 2/3/19  11:21 PM
 */
 #include <string>
 #include "Weapon.h"

 #ifndef THESEHANDS_H
 #define THESEHANDS_H

 /**
  * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
  */
 class TheseHands : public Weapon {
 public:
//hitpoints = 10
//damage = hitpoints + armor
     TheseHands() : Weapon("These Hands", 10.0) //Calls Weapon(name, hitpoints) constructor with values Common Sword and 50.0
     {
     }

     virtual ~TheseHands() {};

     virtual double hit(double armor);

 };

 #endif /* THESEHANDS_H */
