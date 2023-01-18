//  ***************************************************************************
//  *
//  *    PieceType.cpp -- Implementation file for PieceType class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:08:23 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "PieceType.h"
using namespace std;

int PieceType::number_of_piecetypes = 0;

int PieceType::get_number_of_piecetypes()
{
  return number_of_piecetypes;
}

PieceType::PieceType()
{
  number_of_piecetypes++;
}

PieceType::~PieceType()
{
  number_of_piecetypes--;
}
