#include <iostream>
using namespace std;

extern int sumtwo(int [], int[], int);

int main(int argc, char **argv)
{
  int arraySize;

  cout << "Enter the array size:" << endl;
  cin >> arraySize;

  int array1[arraySize];
  int array2[arraySize];  

  cout << "Enter a series of integers for array 1:" << endl;

  for (size_t i = 0; i < arraySize; i++) {

    cin >> array1[i];
  }

  cout << "Enter a series of integers for array 2:" << endl;

  for (size_t i = 0; i < arraySize; i++) {

    cin >> array2[i];
  }

  cout << "The sum of all elements in the two arrays is " << sumtwo(array1, array2, arraySize) << endl;
}
