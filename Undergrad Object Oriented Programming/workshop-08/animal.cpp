//  *****************************************************************************
//  *
//  *    animal.cpp -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include "animal.h"
using namespace std;

int animal::number_of_animals = 0;

int animal::get_number_of_animals()
{
  return number_of_animals;
}

animal::animal()
{
  number_of_animals++;
}

animal::animal( string species, string name )
  : animal_species( species ), animal_name( name )
{
  number_of_animals++;
}

animal::~animal()
{
  number_of_animals--; 
}

void animal::set_species( string species )
{
  animal_species = species;
}

string animal::get_species() const
{
  return animal_species;  
}

void animal::set_name( string name )
{
  animal_name = name;
}

string animal::get_name() const
{
  return animal_name;
}


