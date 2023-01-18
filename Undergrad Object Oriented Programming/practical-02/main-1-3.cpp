#include <iostream>
using namespace std;

extern void count_numbers(int [4][4]);

int main()
{
  int array[4][4];

  for (size_t i = 0; i < 4; i++) {

    for (size_t j = 0; j < 4; j++) {

      cout << "Enter the elements of a 4x4 array: " << endl;
      cout << "element(" << i + 1 << ", " << j + 1 << "): ";
      cin >> array[i][j];
    }
  }
  count_numbers(array);
}
