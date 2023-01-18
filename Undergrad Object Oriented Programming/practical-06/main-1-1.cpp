//  ************************************************
//  *
//  *    main-1-1.cpp
//  *    Author: Wade Shiell
//  *
//  ************************************************

// #include <iostream>
// #include <string>
#include <string>
#include "meerkat.h"
using namespace std;

int main()
{
  int number = 4;
  // string nameArray[number] = { "Apricot", "Titania", "Gavin", "Pi" };
  // int ageArray[number] = { 3, 5, 2, 4 };


  // Create an array of pointers to meerkat objects
  
  meerkat **meerkatPtr = new meerkat*[number];

  // for (int i = 0; i < number; i++) {

  //   meerkatPtr[i] = new meerkat();
  // }

  // // Display initial values for meerkat objects
  
  // for (int i = 0; i < number; i++) {

  //   cout << "Initial value for meerkat " << (i + 1) << "'s name is "
  // 	 << meerkatPtr[i]->getName() << endl;
  //   cout << "Initial value for meerkat " << (i + 1) << "'s age is "
  // 	 << meerkatPtr[i]->getAge() << endl;
  // }
  // cout << endl;

  // // Set the name and age of each meerkay object
  
  // for (int i = 0; i < number; i++) {

  //   meerkatPtr[i]->setName(nameArray[i]);
  //   meerkatPtr[i]->setAge(ageArray[i]);
  // }

  // //Display the updated name and age for each meerkat object
  
  // for (int i = 0; i < number; i++) {

  //   cout << "Updated value for meerkat " << (i + 1) << "'s name is "
  // 	 << meerkatPtr[i]->getName() << endl;
  //   cout << "Updated value for " << meerkatPtr[i]->getName()
  // 	 << "'s age is " << meerkatPtr[i]->getAge() << endl;
  // }

  delete[] meerkatPtr;
}
