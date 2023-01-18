#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class player
{
 public:
  player();
  player(int , string);      
  string get_name();
  int get_jersey_number();
 private:
  int jersey_number;
  string player_name;
};

#endif 
