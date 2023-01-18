#include <iostream>
#include <stdlib.h>

using namespace std;

extern int count_even(int);

int main(int argc, char **argv)
{
  int number;

  cout << "Enter a number:" << endl;
  cin >> number;
  
  cout << "The number of even numbers between 1 and " << number << " is "
       << count_even(number) << endl;
}
