//  *****************************************************************************
//  *
//  *    aircraft.h
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include "person.h"

class aircraft
{
 public:

  aircraft();
  aircraft(std::string callsign, person thePilot, person theCoPilot);
  void setPilot(person thePilot);
  person getPilot();
  void setCoPilot(person theCoPilot);
  person getCoPilot();
  void printDetails();  

 private:

  std::string call;
  person pilot, coPilot;
};

#endif
