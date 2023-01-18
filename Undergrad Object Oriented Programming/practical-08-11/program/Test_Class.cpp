//  ***************************************************************************
//  *
//  *    Test_Class.cpp -- Implementation file for Test_Class class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:10:04 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Test_Class.h"
using namespace std;

int Test_Class::number_of_test_classs = 0;

int Test_Class::get_number_of_test_classs()
{
  return number_of_test_classs;
}

Test_Class::Test_Class()
{
  number_of_test_classs++;
}

Test_Class::~Test_Class()
{
  number_of_test_classs--;
}
