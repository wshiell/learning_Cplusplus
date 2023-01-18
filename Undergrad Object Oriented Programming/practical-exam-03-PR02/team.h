//  *****************************************************************************
//  *
//  *    team.h -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#ifndef TEAM_H
#define TEAM_H

#include <string>
#include "player.h"

class team
{
 public:
  static int current_players;

  team();
  team(int, std::string);
  ~team();

  void set_name(std::string);
  std::string get_name();

  void set_max_players(int);
  int get_max_players();
  
  player * get_roster();
  bool add_player(player);

 private:

  player roster[10];
  int max_players;
  std::string team_name;
};

#endif
