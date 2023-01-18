//  ***************************************************************************
//  *
//  *    base_pointer_test.cpp -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 06:41:16 2019
//  *
//  ***************************************************************************

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef BASE_H
#define BASE_H

class Base
{
public:
  Base() {}
  ~Base() {}
  virtual void f() = 0;
  long double a;
  long double b;
};

#endif

#ifndef DERVIED1_H
#define DERVIED1_H

class Derived1 : public Base
{
public:
  Derived1() {}
  ~Derived1() {}
  virtual void f() { cout << "Derived1::f()" << endl; }
  long double c;
};

#endif

#ifndef DERVIED2_H
#define DERVIED2_H

class Derived2 : public Base
{
public:
  Derived2() {}
  ~Derived2() {}
  virtual void f() { cout << "Derived2::f()" << endl; }
  long double d;
};

#endif

int main()
{
  //  vector < Base * > base_vector (2);
  Base **base_vector[2];
  Derived1 *derived1Ptr = new Derived1();

  (Derived1) base_vector[0] = derived1Ptr;
  // base_vector[1] = new Derived2();
  
  // base_vector[0]->f();
  // base_vector[1]->f();

  // cout << "Side of array pointer: " << sizeof(base_vector) << endl;
  // cout << "Side of array pointer: " << sizeof(base_vector[0]) << endl;
  // cout << "Side of array pointer: " << sizeof(base_vector[1]) << endl;
  // cout << "Side of array pointer: " << sizeof(*base_vector[0]) << endl;
  // cout << "Side of array pointer: " << sizeof(*base_vector[1]) << endl;

  // delete base_vector[0];
  // delete base_vector[1];
}
