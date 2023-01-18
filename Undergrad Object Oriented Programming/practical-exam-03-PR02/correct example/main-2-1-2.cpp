#include "cart.h"
#include "meerkat.h"

int main()
{
  meerkat Meerkats[5];
  cart Carter;

  for (int i = 0; i < 5; i++) {		

    if (Carter.addMeerkat(Meerkats[i]) == false) {
      cout << "Cart's full!" << endl;	
    }
  }

  Carter.emptyCart();	
}
