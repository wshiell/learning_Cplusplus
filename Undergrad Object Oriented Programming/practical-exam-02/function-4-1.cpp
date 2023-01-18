#include <iostream>
using namespace std;

int *readNumbers(int n)
{
  int *array = new int[n];

  for (int i = 0; i < n; i++) {

    cin >> *(array + i);
  }

  return array;
}

// Function 'sumSubArrays' takes a pointer to an int array, and determines the sum of all sub arrays. 
// It then sums those sums, and returns this final sum to main, where it is printed

int sumSubArrays(int *numbers,int length)
{
  int sum, sumSums = 0;

  for (int i = 0; i < length; i++) {

    for (int j = 0; j < length; j++) {

      sum = 0;

      // Each sub array is summed

      for (int k = i; k <= j; k++) {

	sum += *(numbers + k); 
      }

      sumSums += sum; // The total sum of sub arrays is determined
    }
  }

  return sumSums; // The total sum of all sub arrays is returned to main
}
