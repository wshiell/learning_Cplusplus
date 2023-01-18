//  *****************************************************************************
//  *
//  *    vegie.cpp -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include "vegie.h"
using namespace std;

int vegie::vegie_ID;

int vegie::get_vegie()
{
  return vegie_ID;
}
  
vegie::vegie( string aSpecies )
  : animal( aSpecies), fav_food( "Grass" )
{
  vegie_ID++;
}

vegie::~vegie()
{
  vegie_ID--;
}
  
void vegie::set_favourite_food( string aVegie )
{
  fav_food = aVegie;
}

string vegie::getFavouriteFood()
{
  return fav_food;
}
