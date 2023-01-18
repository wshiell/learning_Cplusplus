#include <iostream>
using namespace std;

extern int sum_min_and_max(int integers[], int length);
extern int max_integer(int integers[], int length);
extern int min_integer(int integers[], int length);

int main()
{
  int length;

  cout << "Enter array length: ";
  cin >> length;

  if (length < 0) {
    length = 0;
  }
  
  int integers[length];

  if (length > 0) {

    cout << "Enter the elements of the matrix:" << endl;
    
    for (size_t i = 0; i < length; i++) {

      cout << "Element(" << i + 1 << "): ";
      cin >> integers[i];
    }
  }

  
  if (length > 0) {

    cout << max_integer(integers, length) << endl;
    cout << min_integer(integers, length) << endl;
  
    cout << "The sum of the minimum and maximum elements of the array is: "
	 << sum_min_and_max(integers, length) << endl;
  }
  else {
    cout << "Invalid array." << endl;
  }
}
