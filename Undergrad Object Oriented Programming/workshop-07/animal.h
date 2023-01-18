//  *****************************************************************************
//  *
//  *    animal.h -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class animal
{
 public:

  static int ID;
  static int get_ID();

  animal( const std::string );
  ~animal();

  void set_name( const std::string );
  std::string get_name() const;

  void set_species( const std::string );
  std::string get_species() const;

 private:

  std::string name;
  std::string species;
};

#endif
