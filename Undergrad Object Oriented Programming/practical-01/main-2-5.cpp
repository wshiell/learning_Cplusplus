#include <iostream>
#include <stdlib.h>
using namespace std;

extern bool descending(int [], int);

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

  if (descending(array, arraySize)) {
    cout << "Array *is* in descending order." << endl;
  }
  else {
    cout << "Array is *not* in descending order." << endl;
  }
}
