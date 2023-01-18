#include "cart.h"
using namespace std;

cart::cart_ID = 0;

cart::get_cartID()
{
  return cart_ID;
}

cart::cart()
  : meerKount(0)
{
  cart_ID++;
  for ( size_t i = 0; i < 5; i++ ) {
    meerKart[0] = NULL;
  }
}

cart::~cart()
{
  cart_ID--;
}

bool cart::addMeerkat( const meerkat cat )
{
  if ( meerKount == 4 )
    {
      return false;
    }
  else {
    meerKart[meerKount] = cat;
    meerKount++;
    return true;			
  }
}

cart::removeMeerkat()
{
  meerKart[meerKount] = NULL;
  meerKount--;
}

void cart::emptyCart()
{
  meerKount = 0;

  for ( size_t i = 0; i < 5; i++ ) {
    meerKart[i] = NULL;
  }
}

void cart::printMeerkats() const
{
  for (int i = 0; i < meerKount; i++) {	
    cout << meerKart[i].getName() << " " << meerKart[i].getAge() << endl;
  }
}
