//  *****************************************************************************
//  *
//  *    main-3-1.cpp -- Driver for problem-3-1
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include <iostream>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
using namespace std;

int main()
{
  string hunterNames[3] = { "Gary", "Ryan", "Stevie" };
  string vegieNames[2] = { "Ngambu", "Brynn" };
  string hunterSpecies[3] = { "predator", "shark", "human" };
  string vegieSpecies[2] = { "gazelle", "catepillar" };

  animal *animalListPtr[3];

  hunter **hunterListPtr = new hunter*[3];
  vegie **vegieListPtr = new vegie*[2];
  
  for ( size_t i = 0; i < 3; i++ ) {
    hunterListPtr[i] = new hunter( hunterSpecies[i], hunterNames[i] );
    animalListPtr[i] = hunterListPtr[i];
  }

  for ( size_t i = 3; i < 5; i++ ) {
    vegieListPtr[i - 3] = new vegie( vegieSpecies[i - 3], vegieNames[i - 3] );
    animalListPtr[i] = vegieListPtr[i - 3];
  }

  for ( size_t i = 0; i < 5; i++ ) {
    cout << animalListPtr[i]->get_species() << ": ";
    cout << animalListPtr[i]->get_name() << endl;
  }

  delete[] hunterListPtr;
  delete[] vegieListPtr;
}
