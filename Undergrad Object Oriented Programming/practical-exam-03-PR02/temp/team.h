//  ***************************************************************************
//  *
//  *    team.h -- Header file for team object
//  *    Author: Wade Shiell
//  *
//  ***************************************************************************

#ifndef TEAM_H
#define TEAM_H

#include <string>
#include "player.h"

class team
{
 public:
  
  static int team_ID; // Records the number of teams instantiated
  static int get_teamID(); // Returns the number of teams instantiated

  team(); // Default constructor
  team( int = 0, const std::string = "" ); // User-defined constructor w/ default values
  ~team(); // Default destructor

  void set_max_players( int ); // Sets the maximum number of players
  int get_max_players(); // Returns the maximum number of players

  void set_name( const std::string ); // Sets the name of the team
  std::string get_name() const; // Returns the name of the team

  bool add_player( player ); // Adds a new player to the team (if room)
  player * get_player( int ); // Returns a specific player in the roster

  int get_current_number_of_players(); // Returns current # on the team
  player ** get_roster(); // Returns current roster of players

  
 private:

  void initialise_team(); // Sets current player numbers & roster to empty values
  int number_players; // Current number of players on a team
  int max_size; // Maximum size of a team
  std::string team_name; // Team name
  player **roster = new player*[max_size]; // Roster of players on a team
};

#endif
