//  *****************************************************************************
//  *
//  *    hunter.h -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#ifndef HUNTER_H
#define HUNTER_H

#include <vector>
#include <string>
#include "animal.h"

class hunter : public animal
{
 public:

  static int hunter_ID;
  static int get_hunter();

  hunter( const std::string );
  ~hunter();

  void record_kill( const std::string );
  std::string getName() const;  
  int numberOfKills() const;

 private:
  int total_kills;
  std::string kill;
  std::vector< std::string > get_kills = std::vector< std::string>(4);  
};

#endif
