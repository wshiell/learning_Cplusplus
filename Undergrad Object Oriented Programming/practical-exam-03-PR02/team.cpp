#include <iostream>
#include "team.h"
using namespace std;

int team::current_players = 0;

team::team()
{
  
}

team::team(int max, string name)
{
  max_players = max;
  team_name = name;
}

team::~team()
{
  
}
void team::set_name(string name)
{
  team_name = name;  
}

string team::get_name()
{
  return team_name;
}

void team::set_max_players(int max)
{
  max_players = max;  
}

int team::get_max_players()
{
  return max_players;
}

player * team::get_roster()
{
  return roster;
}

bool team::add_player(player new_player)
{
  if (current_players < max_players) {
    roster[current_players] = new_player;
    current_players++;
    return true;
  }
  else {
    return false;
  }
}
