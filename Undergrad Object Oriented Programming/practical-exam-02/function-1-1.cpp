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

