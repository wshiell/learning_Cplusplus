#include <iostream>
using namespace std;

int *readNumbers()
{
  int *arrayPtr = new int[10];

  for (int i = 0; i < 10; i++) {

    cin >> *(arrayPtr + i);
  }

  return arrayPtr;
}

int *reverseArray(int *numbers,int length)
{
  int *tempPtr = new int[length];
  
  for (int i = 0; i < length; i++) {

    *(tempPtr + i) = *(numbers + ((length - 1) - i));
  }

  numbers = tempPtr;

  return numbers;
}

bool equalsArray(int *numbers1,int *numbers2,int length)
{
  for (int i = 0; i < length; i++) {

    if (*(numbers1 + i) != *(numbers2 + i)) {
      return false;
    }
  }

  return true;
}
















