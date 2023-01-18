#include <iostream>
using namespace std;

void cpyia(int old_array[], int new_array[], int length)
{
  int *oldPtr = &old_array[0];
  int *newPtr = &new_array[0];
  
  for (int i = 0; i < length; i++) {

    *newPtr++ = *oldPtr++;
  }
}
