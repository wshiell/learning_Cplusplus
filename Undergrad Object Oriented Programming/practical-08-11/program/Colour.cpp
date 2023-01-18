//  ***************************************************************************
//  *
//  *    Colour.cpp -- Implementation file for Colour class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:05:11 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Colour.h"
using namespace std;

int Colour::number_of_colours = 0;

int Colour::get_number_of_colours()
{
  return number_of_colours;
}

Colour::Colour()
{
  number_of_colours++;
}

Colour::~Colour()
{
  number_of_colours--;
}
