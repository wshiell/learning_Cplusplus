#include <iostream>
using namespace std;

int main()
{
  int a;

  cout << "Enter an integer:" << endl;
  cin >> a;
  
  int *aPtr = &a;

  cout << "The address of variable a is: " << aPtr << endl;
  cout << "The value of variable a is: " << *aPtr << endl;
}
