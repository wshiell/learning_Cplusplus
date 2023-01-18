#include <iostream>
using namespace std;

bool descending(int array[], int n)
{
  if (n > 0) {

    for (size_t i = 0; i < n - 1; i++) {

      if (array[i] > array[i + 1]) {
	continue;
      }
      else {
	return false;
      }
    }
    return true;
  }
  else {
    cout << "Array is empty." << endl;
    return false;
  }
}
