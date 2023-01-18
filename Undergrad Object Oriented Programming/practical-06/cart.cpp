#include <iostream>
#include "cart.h"
using namespace std;

int cart::cart_ID = 0;

int cart::get_cartID()
{
  return cart_ID;
}

cart::cart()
  : meerKount(0)
{
  cart_ID++;
  for ( size_t i = 0; i < 5; i++ ) {
    meerKart[i].setAge(0);
    meerKart[i].setName( "" );    
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

void cart::removeMeerkat()
{
  meerKart[meerKount].setAge(0);
  meerKart[meerKount].setName( "" );    
  meerKount--;
}

void cart::emptyCart()
{
  meerKount = 0;

  for ( size_t i = 0; i < 5; i++ ) {
    meerKart[i].setAge(0);
    meerKart[i].setName( "" );    
  }
}

void cart::printMeerkats() const
{
  for (int i = 0; i < meerKount; i++) {	
    cout << meerKart[i].getName() << " " << meerKart[i].getAge() << endl;
  }
}
