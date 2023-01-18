//  *****************************************************************************
//  *
//  *    cart.h 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#ifndef CART_H
#define CART_H
#include "meerkat.h"

class cart
{
 public:

  cart();
  bool addMeerkat(meerkat cat);
  void emptyCart();
  void printMeerkats();

 private:

  meerkat **gang = new meerkat*[4];
  int passenger;
  
};

#endif
