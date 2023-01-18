#ifndef CART_H
#define CART_H
#include "meerkat.h"

class cart
{
 public:
  static int cart_ID;
  static int get_cartID();
  
  cart();
  ~cart();
  
  bool addMeerkat( const meerkat cat );
  void removeMeerkat();
  
  void emptyCart();
  void printMeerkats() const;
  
 private:
  int meerKount;
  meerkat meerKart[5];

};

#endif
