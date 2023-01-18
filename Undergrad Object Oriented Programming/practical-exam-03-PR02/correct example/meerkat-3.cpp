#include "meerkat.h"
using namespace std;

meerkat::meer_ID = 0;

meerkat::get_MeerkatID()
{
  return meet_ID;
}

meerkat::meerkat()
  : age(0)
{
  meer_ID++;
}

meerkat::~meerkat()
{
  meer_ID--;
}

void meerkat::setName( const string meerName )
{
  name = meerName;
}

string meerkat::getName() const
{
  return name;
}

void meerkat::setAge( const int meerAge )
{
  age = meerAge;
}

int meerkat::getAge() const
{
  return age;
}
