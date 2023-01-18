//  *****************************************************************************
//  *
//  *    Library.cpp -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include "Library.h"

Library::Library()
{
  copies = 10;
  
  for (int i = 0; i < 10; i++) {
    libraryPtr[i] = new Book();
  }
}

bool Library::borrowBook()
{
  if (copies > 0) {
    copies--;
  }
  else {
    return false;
  }
  return true;  
}

void Library::returnBook()
{
  copies++;  
}
