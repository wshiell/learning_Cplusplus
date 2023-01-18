//  ***************************************************************************
//  *
//  *    player.cpp -- Implementation file for player object
//  *    Author: Wade Shiell
//  *
//  ***************************************************************************

#include "player.h"
using namespace std;

int player::player_ID = 0; // Set initial number of players to zero

int player::get_playerID()
{
  return player_ID;
}

player::player()
  : jersey_number( 0 ), player_name( "" ) // Initialise player object to empty values
{
  player_ID++; // Increment # of players by one when new player object created
}

player::player( int jersey, string name )
  : jersey_number( jersey ), player_name( name) // Initialise player object
{
  player_ID++; // Increment # players by one when new player object is created
}

player::~player()
{
  player_ID--; // Decrement # players by 1 when new player object is destructed
}

void player::set_name( const string name )
{
  player_name = name;
}

string player::get_name() const
{
  return player_name;
}

void player::set_jersey_number( int jersey )
{
  jersey_number = jersey;
}

int player::get_jersey_number() const
{
  return jersey_number;
}
