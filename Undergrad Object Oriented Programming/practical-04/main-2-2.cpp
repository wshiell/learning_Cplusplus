#include <iostream>
using namespace std;

extern int* readArray(int *numbers, int length);
extern void printArray(int *numbers, int length);
extern int maximum_sum(int *numbers, int length);

int main()
{
  int length = 10, maxSum;
  int *numbers = new int[10];
  
  numbers = readArray(numbers, length);
  printArray(numbers, length);

  maxSum = maximum_sum(numbers, length);

  if (maxSum  >= 0) {
    cout << "The sum of all sub arrays is "
	 << maxSum << endl;
  }
  else {
    cout << "All numbers are negative" << endl;
  }
  
  delete[] numbers;
}
