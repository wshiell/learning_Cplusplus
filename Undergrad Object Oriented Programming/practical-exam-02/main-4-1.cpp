// Program uses function 'sumSubArrays' to sum the sums of all sub arrays in the array 'numbers'
// then returns this value to main

#include <iostream>
using namespace std;

extern int *readNumbers(int n);
extern int sumSubArrays(int *numbers,int length) ; 
 
int main()
{
  int length = 10;
  int *numbers = new int[length];

  numbers = readNumbers(length);

  cout << "Sum is: " << sumSubArrays(numbers, length) << endl;

  delete[] numbers;
}
