//  *****************************************************************************
//  *
//  *    aircraft.cpp
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include <iostream>
#include "aircraft.h"
using namespace std;

aircraft::aircraft()
{
  
}

aircraft::aircraft(string callsign, person thePilot, person theCoPilot)
{
  call = callsign;
  pilot = thePilot;
  coPilot = theCoPilot;
}

void aircraft::setPilot(person thePilot)
{
  pilot = thePilot;
}
person aircraft::getPilot()
{
  return pilot;
}

void aircraft::setCoPilot(person theCoPilot)
{
  coPilot = theCoPilot;
}

person aircraft::getCoPilot()
{
  return coPilot;
}

void aircraft::printDetails()
{
  cout << call << endl;
  cout << pilot.getName() << endl;
  cout << coPilot.getName() << endl;
}

