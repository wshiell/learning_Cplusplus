//  *****************************************************************************
//  *
//  *    Library.h -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include "Book.h"

#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
  public:

  Library();
  bool borrowBook();
  void returnBook();

  //private:

  int copies;
  Book **libraryPtr = new Book*[10];
};

#endif
