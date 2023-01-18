//  *****************************************************************************
//  *
//  *    vegie.cpp -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include "vegie.h"
using namespace std;

int vegie::number_of_vegies = 0;

int vegie::get_number_of_vegies()
{
  return number_of_vegies;
}

vegie::vegie()
{
  number_of_vegies++;  
}

vegie::vegie( string species, string name )
  : animal( species, name ), favourite_food( "Grass" )
{
  number_of_vegies++;
}

vegie::~vegie()
{
  number_of_vegies--;
}
  
void vegie::set_favourite_food( string food )
{
  favourite_food = food;
}

string vegie::get_favourite_food() const
{
  return favourite_food;
}
