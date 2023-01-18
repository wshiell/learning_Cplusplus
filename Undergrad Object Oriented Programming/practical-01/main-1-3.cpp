#include <iostream>
using namespace std;

extern int count(int [], int, int);

int main(int argc, char **argv)
{
  int arraySize, parameter;

  cout << "Enter the array size:" << endl;
  cin >> arraySize;

  cout << "Enter the parameter:" << endl;
  cin >> parameter;
  
  int array[arraySize];

  cout << "Enter a series of integers:" << endl;

  for (size_t i = 0; i < arraySize; i++) {

    cin >> array[i];
  }

  cout << "The number of elements equal to " << parameter << " is: "
       << count(array, arraySize, parameter) << endl;
}
