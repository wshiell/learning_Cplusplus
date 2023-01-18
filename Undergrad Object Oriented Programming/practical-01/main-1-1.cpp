#include <iostream>
using namespace std;

extern int sum_array(int [], int);

int main(int argc, char **argv)
{
  int arraySize;

  cout << "Enter the array size:" << endl;
  cin >> arraySize;

  int array[arraySize];

  cout << "Enter a series of integers:" << endl;

  for (size_t i = 0; i < arraySize; i++) {
    cin >> array[i];
  }

  cout << "The sum of the entered integers is: " << sum_array(array, arraySize) << endl;
}
