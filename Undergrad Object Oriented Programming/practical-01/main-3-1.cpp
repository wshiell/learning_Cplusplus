#include <iostream>
#include <stdlib.h>
using namespace std;

extern bool fanarray(int [], int);

int main(int argc, char **argv)
{
  int arraySize;

  cout << "Enter array size:" << endl;
  cin >> arraySize;

  int array[arraySize];

  if (arraySize != 0) {
    cout << "Enter elements of array:" << endl;
  }

  for (size_t i = 0; i < arraySize; i++) {
    cin >> array[i];
  }

  if (fanarray(array, arraySize)) {
    cout << "Array *is* a fan array." << endl;
  }
  else {
    cout << "Array is *not* a fan array." << endl;
  }
}
