//  *****************************************************************************
//  *
//  *    hunter.cpp -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include "hunter.h"
using namespace std;

int hunter::hunter_ID = 0;

int hunter::get_hunter()
{
  return hunter_ID;
}

hunter::hunter( const string type )
  : animal( type )
{
  hunter_ID++;  
}

void hunter::record_kill( const string pwned )
{
  total_kills++;
  get_kills[total_kills] = pwned;
}

int hunter::numberOfKills() const
{
  return total_kills;
}

string hunter::getName() const
{
  return hunter::get_kills[0];
}

hunter::~hunter()
{
  hunter_ID--;
}







