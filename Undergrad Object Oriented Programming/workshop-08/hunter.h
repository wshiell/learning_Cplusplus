//  *****************************************************************************
//  *
//  *    hunter.h -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#ifndef HUNTER_H
#define HUNTER_H

#include <string>
#include "animal.h"

class hunter : public animal
{
 public:

  static int number_of_hunters;
  static int get_number_of_hunters();

  hunter( std::string, std::string );
  ~hunter();

  void set_kill( animal );
  /* animal get_kill( int ) const; */
  
  int get_number_of_kills() const;

 private:
  int total_kills;
  animal kill_list[4];
};

#endif
