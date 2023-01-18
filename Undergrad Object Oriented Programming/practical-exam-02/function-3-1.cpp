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

// Function 'palindrome' takes a pointer to an int array, and returns true if the array is
// a palindrome, and false if it is not

bool palindrome(int *numbers,int length)
{
  for (int i = 0; i < length; i++) {

    if (*(numbers + i) != *(numbers + (length -1) - i)) { // Compares elements i and length - i
                                                          // to test whether array is a palindrome
      return false;
    }
  }
  return true;
}
