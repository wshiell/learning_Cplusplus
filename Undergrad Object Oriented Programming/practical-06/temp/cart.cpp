//  *****************************************************************************
//  *
//  *    cart.cpp
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include <iostream>
#include "cart.h"
using namespace std;

cart::cart()
{
  passenger = 0;

  for (int i = 0; i < 4; i++) {
    gang[i] = new meerkat();
  }
}

bool cart::addMeerkat(meerkat cat)
{
  if (passenger < 4) {
    *gang[passenger] = cat;
    passenger++;
  }
  else {
    return false;
  }
  return true;
}

void cart::emptyCart()
{
  for (int i = 0; i < 4; i++) {
    gang[i]->setName("");
    gang[i]->setAge(0);
  }
}

void cart::printMeerkats()
{
  for (int i = 0; i < 4; i++) {

    cout << gang[i]->getName() << " " << gang[i]->getAge() << "\n";
  }
}
