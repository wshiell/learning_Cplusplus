#include "player.h"

player::player()
{
  
}

player::player(int jersey, string name)
{
  player_name = name;
  jersey_number = jersey;
}

string player::get_name()
{
  return player_name;
}

int player::get_jersey_number()
{
  return jersey_number;
}
