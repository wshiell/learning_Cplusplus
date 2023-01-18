//  *****************************************************************************
//  *
//  *    main-2-1.cpp -- 
//  *    Author: Wade Shiell
//  *
//  *****************************************************************************

#include <iostream>
#include "animal.h"
#include "hunter.h"
using namespace std;

int main()
{
  hunter hunter1( "tiger" );
  {
    hunter hunter2( "tiger" );   
    cout << hunter::get_hunter() << endl;
  }
  cout << hunter::get_hunter() << endl;   
}
