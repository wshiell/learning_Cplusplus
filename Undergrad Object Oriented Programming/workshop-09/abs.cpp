#include <iostream>
#include <stdlib.h>
using namespace std;

// program to add two numbers together

int main()
{
  int x,y,z;

  // prompt for user input

  cout << "Enter x: ";
  cin >> x;
  cout << "Enter y: ";
  cin >> y;

  // work out the sum - but use the absolute value of y

  z = x + abs(y);

  // tell the user what was entered and the sum

  cout << "x = " << x << ", y = " << y << ", ";
  cout << "x + y = " << z << endl;
}