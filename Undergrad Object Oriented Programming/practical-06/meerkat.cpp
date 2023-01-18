#include "meerkat.h"
using namespace std;

int meerkat::meer_ID = 0;

int meerkat::get_MeerkatID()
{
  return meer_ID;
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
