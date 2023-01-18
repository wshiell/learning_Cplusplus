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

  *aPtr +=5;
  
  cout << "The variable a incremented by 5 is " << *aPtr << endl;

  *aPtr -= 2;  
  
  cout << "The variable a decremented by 2 is " << *aPtr << endl;
}
