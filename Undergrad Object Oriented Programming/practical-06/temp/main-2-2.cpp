//  *****************************************************************************
//  *
//  *    main-2-2.cpp
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include <iostream>
#include <string>
#include "aircraft.h"
using namespace std;

int main()
{
  string callsign = "QI120";
  string namesList[3] = { "Alan Davies", "Phil Jupitus", "David Mitchell" };
  int salaryList[3] = { 300000, 270000, 320000 };
  person **peoplePtr = new person*[3];

  for (int i = 0; i < 3; i++) {
    peoplePtr[i] = new person(namesList[i], salaryList[i]);
  }

  aircraft plane(callsign, *peoplePtr[0], *peoplePtr[1]);

  plane.printDetails();
  plane.setPilot(*peoplePtr[2]);
  plane.setCoPilot(*peoplePtr[0]);
  plane.printDetails();
  delete[] peoplePtr;
}
