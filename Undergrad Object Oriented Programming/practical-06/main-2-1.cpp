#include <iostream>
#include "cart.h"
#include "meerkat.h"
using namespace std;

int main()
{
  meerkat Meerkats[5];
  cart Carter;

  for ( size_t i = 0; i < 5; i++ ) {	
    if ( Carter.addMeerkat(Meerkats[i]) ) {
      cout << "Climb aboard :)" << endl;
    }
    else{
      cout << "Cart's full! You're walking buddy!" << endl;	
    }
  }

  Carter.emptyCart();	
}
