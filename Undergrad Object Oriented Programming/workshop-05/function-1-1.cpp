#include <iostream>
using namespace std;

int *readNumbers()
{
  int *arrayPtr = new int[10];

  //  cout << "Enter an integer: " << endl;

  for (int i = 0; i < 10; i++) {

    cin >> *(arrayPtr + i);
  }

  return arrayPtr;
}

void printNumbers(int *numbers,int length)
{
  for (int i = 0; i < length; i++) {

    cout << i << " ";
    cout << *numbers << endl;
    numbers++;
  }
}
