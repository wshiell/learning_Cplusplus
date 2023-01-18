//  ***************************************************************************
//  *
//  *    Computer.cpp -- Implementation file for Computer class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:05:34 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Computer.h"
using namespace std;

// number of instantiated computer players

int Computer::number_of_computers = 0;

// returns the number of instantiated computer players

int Computer::get_number_of_computers()
{
  return number_of_computers;
}

// user-defined constructor

Computer::Computer()
{
  number_of_computers++;
}

// user-defined destructor

Computer::~Computer()
{
  number_of_computers--;
}

// sets analysis depth

void Computer::set_analysis_depth( int depth )
{
  analysis_depth = depth;
}

// returns analysis depth

int Computer::get_analysis_depth() const
{
  return analysis_depth;
}
