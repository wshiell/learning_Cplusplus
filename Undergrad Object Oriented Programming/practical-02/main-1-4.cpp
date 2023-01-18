#include <iostream>
using namespace std;

extern void print_scaled_matrix(int [4][4], int scale);

int main()
{
  int array[4][4];
  int scale;

  cout << "Enter the elements of a 4x4 array: " << endl;

  for (size_t i = 0; i < 4; i++) {

    for (size_t j = 0; j < 4; j++) {

      cout << "element(" << i + 1 << ", " << j + 1 << "): ";
      cin >> array[i][j];
    }
  }

  cout << "Enter scaling factor: ";
  cin >> scale;
  print_scaled_matrix(array, scale);
}
