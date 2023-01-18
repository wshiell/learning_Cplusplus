#include <iostream>
using namespace std;

void print_scaled_matrix(int array[4][4], int scale)
{

  for (size_t i = 0; i < 4; i++) {

    for (size_t j = 0; j < 4; j++) {

      cout << array[i][j] * scale << " ";
    }
    cout << endl;
  }
}
