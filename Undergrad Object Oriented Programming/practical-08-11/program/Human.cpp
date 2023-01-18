//  ***************************************************************************
//  *
//  *    Human.cpp -- Implementation file for Human class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:06:21 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Human.h"
using namespace std;

// number of instantiated human players

int Human::number_of_humans = 0;

// returns the number of instantiaed human players

int Human::get_number_of_humans()
{
  return number_of_humans;
}

// user-defined constructor

Human::Human()
{
  number_of_humans++;
}

// user-defined destructor

Human::~Human()
{
  number_of_humans--;
}
