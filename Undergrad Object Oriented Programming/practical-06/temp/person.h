//  ************************************************
//  *
//  *    person.h
//  *    Author: Wade Shiell
//  *
//  ************************************************

#include <string>
#ifndef PERSON_H
#define PERSON_H

class person
{
 public:

  person();
  person(std::string myName, int salary);
  void setName(std::string myName); 
  std::string getName();
  void setSalary(int salary);
  int getSalary();

 private:

  int income;
  std::string identity;
};

#endif
