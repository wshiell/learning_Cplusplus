#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int* readArray(int *numbers, int length)
{
  srand(time(NULL));

  for (int i = 0; i < length; i++) {

    *(numbers + i) = rand() % 20 - 10;
  }

  return numbers;
}

void printArray(int *numbers, int length)
{
  for (int i = 0; i < length; i++) {

    cout << setw(4) << *(numbers + i);
  }
  cout << endl;
}

int maximum_sum(int *numbers, int length)
{
  int sum, maxSum = 0, negativeCount;
  
  for (int i = 0; i < length; i++) {

    if (*(numbers + i) < 0) {
      negativeCount++;
    }
    
    for (int j = 0; j < length; j++) {

      sum = 0;
      
      for (int k = i; k <= j; k++) {

	sum += *(numbers + k);
      }

      if (sum > maxSum) {
        maxSum = sum;	
      }
    }
  }

  if (negativeCount != length) {
    return maxSum;
  }
  else {
    return 0;
  }
}
