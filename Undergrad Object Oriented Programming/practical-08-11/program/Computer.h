//  ***************************************************************************
//  *
//  *    Computer.h -- Header file for Computer class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:05:23 2019
//  *
//  ***************************************************************************

#ifndef Computer_H
#define Computer_H

#include "Player.h"

class Computer
{
 public:

  // Class Data & Service functions

  static int number_of_computers;
  static int get_number_of_computers();

  // Constructor & Destructor functions

  Computer();
  ~Computer();

  // Set and Get functions

  void set_analysis_depth( int );
  int get_analysis_depth() const;
  
 private:

  // Class attributes

  int analysis_depth;
};

#endif
