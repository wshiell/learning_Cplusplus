//  *****************************************************************************
//  *
//  *    vegie.h -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#ifndef VEGIE_H
#define VEGIE_H

#include <string>
#include "animal.h"

class vegie : public animal
{
 public:
  static int number_of_vegies;;
  static int get_number_of_vegies();

  vegie();
  vegie( std::string, std::string );
  ~vegie();
  
  void set_favourite_food( std::string  );
  std::string get_favourite_food() const;
  
 private:
  std::string favourite_food;
};

#endif
