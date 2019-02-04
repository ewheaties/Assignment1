/*
 * File:   SimpleHammer.h
 * Author: Elisa Wheaton <wheaton@cs.fsu.edu>
 *
 * Created on 2/3/19  9:54 PM
 */

 #include <string>
 #include "Weapon.h"

 #ifndef SIMPLEHAMMER_H
 #define SIMPLEHAMMER_CPP

 class SimpleHammer : public Weapon {
 public:

     SimpleHammer() : Weapon("Simple Hammer", 25.0) //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25
     {
     }

     virtual ~SimpleHammer() {};

     virtual double hit(double armor);

 };

 #endif /* SIMPLEHAMMER_H */
