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

  static int number_of_animals;
  static int get_number_of_animals();

  animal();
  animal( std::string, std::string );
  ~animal();

  void set_name( std::string );
  std::string get_name() const;

  void set_species( std::string );
  std::string get_species() const;

 private:

  std::string animal_species;
  std::string animal_name;
};

#endif
