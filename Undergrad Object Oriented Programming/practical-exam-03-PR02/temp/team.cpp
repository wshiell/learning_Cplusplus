//  ***************************************************************************
//  *
//  *    team.cpp -- Implementation file for team object
//  *    Author: Wade Shiell
//  *
//  ***************************************************************************

#include <iostream>
#include "team.h"
using namespace std;

int team::team_ID = 0; // Initialise number of teams to zero

int team::get_teamID()
{
  return team_ID;
}

team::team()
  : number_players( 0 ), max_size( 0 ), team_name( "" ) // Initialise team object to empty values
{
  initialise_team(); // Fill roster with dummy (empty) player objects
  team_ID++;
}

team::team( int max, const string name )
  : number_players( 0 ), max_size( max ), team_name( name ) // Initialise team object
{
  initialise_team();  
  team_ID++;
}

team::~team()
{
  team_ID--;
  delete[] roster; // Deallocate memory assigned to roster
  roster = nullptr; // Set pointer to roster to nullptr
}

void team::set_max_players( int max )
{
  max_size = max;
}

int team::get_max_players()
{
  return max_size;
}

void team::set_name( const string name )
{
  team_name = name;
}

string team::get_name() const
{
  return team_name;
}

bool team::add_player( player new_player )
{
  // Add player to roster if there is room. If no room, print error message

  if ( number_players < max_size ) {
    roster[number_players] = &new_player; // Adds player to end of roster
    number_players++; // Increments number of players on team by one
    return true; // Indicates player was added successfully
  }
  else {
    return false; // Indicates player was *not* added successfully
  }
}

player * team::get_player( int player_number )
{
  // Return pointer to player in roster at given index
  
  return ( *get_roster() + player_number );
}

int team::get_current_number_of_players()
{
  return number_players;
}

player ** team::get_roster()
{
  return roster; // Returns pointer to beginning of roster of player objects
}

void team::initialise_team()
{
  // Create empty roster of player objects

  for ( int i = 0; i < max_size; i++ ) {
    roster[i] = new player( 0, "" );
  }
}
