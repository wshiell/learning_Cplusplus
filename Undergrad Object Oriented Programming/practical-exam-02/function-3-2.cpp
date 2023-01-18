#include <iostream>
using namespace std;

// Function 'readNumbers' takes a pointer to an int array and initialises it based on user input

int *readNumbers(int n)
{
  int *array = new int[n];

  for (int i = 0; i < n; i++) {

    cin >> *(array + i);
  }

  return array;
}

// Function 'printNumbers' takes a pointer to an int array and prints the elements, one per line

void printNumbers(int *numbers,int length)
{
  for (int i = 0; i < length; i++) {

    cout << i << " " << *(numbers + i) << endl;
  }
}

// Function 'reverseArray' is passes a pointer to an int array, declares a new pointer 'tempArray'
// to an int array, then uses a for loop to assign the elements of 'numbers' to 'tempArray' in reverse
// order.

int *reverseArray(int *numbers,int length)
{
  int *tempArray = new int[length];

  for (int i = 0; i < length; i++) {
 
    *(tempArray + i) = *(numbers + (length - 1) - i); // Swaps the values in elements i and length - i
  }

  return tempArray;
}
