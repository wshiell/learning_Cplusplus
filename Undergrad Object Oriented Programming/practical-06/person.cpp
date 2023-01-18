//  ************************************************
//  *
//  *    person.cpp
//  *    Author: Wade Shiell
//  *
//  ************************************************

#include "person.h"
using namespace std;

person::person()
{
  
}

person::person(string myName, int salary)
{
  setName(myName);
  setSalary(salary);
}

void person::setName(string myName)
{
  identity = myName;
}

string person::getName()
{
  return identity;
}

void person::setSalary(int salary)
{
  income = salary;
}

int person::getSalary()
{
  return income;
}
