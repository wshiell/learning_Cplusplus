//  *****************************************************************************
//  *
//  *    main-2-1.cpp 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include <iostream>
#include <string>
//#include "meerkat.h"
#include "cart.h"
using namespace std;

int main()
{
  string katList[5] = { "Do", "Re", "Mi", "Fa", "So" };
  //  int katAge[5] = { 3, 5, 2, 4, 3 };
  meerkat **meerkatPtr = new meerkat*[5];
  cart wagon;

  for (int i = 0; i < 5; i++) {

    meerkatPtr[i] = new meerkat();
  }

  for (int i = 0; i < 5; i++) {

    meerkatPtr[i]->setName(katList[i]);
  }

  for (int i = 0; i < 5; i++) {

    cout << meerkatPtr[i]->getName() << endl;
  }


  for (int i = 0; i < 5; i++) {

    if (!wagon.addMeerkat(*meerkatPtr[i])) {
      cout << "Cart is full. You're walking, buddy!" << endl;
    }
  }

  delete[] meerkatPtr;
}
