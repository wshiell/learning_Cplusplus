//  *****************************************************************************
//  *
//  *    animal.cpp -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include "animal.h"
using namespace std;

int animal::ID = 0;

int animal::get_ID()
{
  return ID;
}

animal::animal( const string type )
  : name( "" ), species( type )
{
  ID++;
}

animal::~animal()
{
  ID--; 
}

void animal::set_name( const string avatar )
{
  name = avatar;
}

string animal::get_name() const
{
  return name;
}

void animal::set_species( const string type )
{
  species = type;
}

string animal::get_species() const
{
  return species;  
}

