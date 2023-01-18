//  ************************************************
//  *
//  *    meerkat.cpp
//  *    Author: Wade Shiell
//  *
//  ************************************************

#include <string>
#include "meerkat.h"
using namespace std;

meerkat::meerkat()
{

}


// meerkat::meerkat(string meerName, int meerAge)
// {
//   setName("");
//   setAge(0);
// }

void meerkat::setName(string meerName)
{
  name = meerName;
}

string meerkat::getName()
{
  return name;
}

void meerkat::setAge(int meerAge)
{
  age = meerAge;
}

int meerkat::getAge()
{
  return age;
}
