#include <iostream>
#include <stdlib.h>
using namespace std;

extern void twofivenine(int [], int);

int main(int argc, char **argv)
{
  int arraySize;

  cout << "Enter array size:" << endl;
  cin >> arraySize;

  int array[arraySize];

  cout << "Enter elements of array:" << endl;

  for (size_t i = 0; i < arraySize; i++) {
    cin >> array[i];
  }

  twofivenine(array, arraySize);
}
