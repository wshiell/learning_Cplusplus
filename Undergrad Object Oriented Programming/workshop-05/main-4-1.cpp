#include <iostream>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main()
{
  int length = 10;
  int *numbers = new int[length];

  numbers = readNumbers();
  int sum = secondSmallestSum(numbers, length);

  cout << "The second smallest sum of all possible contigous sub-arrays is: "
       << sum << endl;

  delete[] numbers;
}
