//  *****************************************************************************
//  *
//  *    hunter.cpp -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include "hunter.h"
using namespace std;

int hunter::number_of_hunters = 0;

int hunter::get_number_of_hunters()
{
  return number_of_hunters;
}

hunter::hunter( string species, string name )
  : animal( species, name )
{
  total_kills = 0;
  number_of_hunters++;  
}

hunter::~hunter()
{
  number_of_hunters--;
}

void hunter::set_kill( animal prey )
{
  kill_list[total_kills] = prey;
  total_kills++;
}

// animal hunter::get_kill( int prey ) const
// {
//   return kill_list[prey];
// }

int hunter::get_number_of_kills() const
{
  return total_kills;
}




