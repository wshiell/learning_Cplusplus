#include <iostream>
using namespace std;

extern int diagonal(int array[4][4]);

int main()
{
  int array[4][4];

  cout << "Enter the elements of a 4x4 array:" << endl;

  for (size_t i = 0; i < 4; i++) {

    for (size_t j = 0; j < 4; j++) {

      cout << "Element (" << i + 1 << "," << j + 1 << "): ";
      cin >> array[i][j];
    }
  }
  
  cout << "The sum of the diagonal entries of the array is: " << diagonal(array) << endl;
}
