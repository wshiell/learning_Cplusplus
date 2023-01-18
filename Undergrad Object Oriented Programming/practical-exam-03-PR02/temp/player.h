//  ***************************************************************************
//  *
//  *    player.h -- Header file for player object
//  *    Author: Wade Shiell
//  *
//  ***************************************************************************

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class player
{
 public:

  static int player_ID; // Records the number of players instantiated
  static int get_playerID(); // Returns the # of players instantiated

  player(); // Default constructor
  player( int = 0, std::string = "" ); // User-defined constructor with default values
  ~player(); // Default destructor

  void set_name( const std::string ); // Player name set function
  std::string get_name() const; // Player name get function

  void set_jersey_number( int ); // Player jersey number set function
  int get_jersey_number() const; // Player jersey number get function

 private:

  int jersey_number; // Player jersey number
  std::string player_name; // Player name
};

#endif
