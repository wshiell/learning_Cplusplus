#include <iostream>
using namespace std;

void print_summed_matrices(int array1[3][3], int array2[3][3])
{
  for (size_t i = 0; i < 3; i++) {

    for (size_t j = 0; j < 3; j++) {

      cout << array1[i][j] + array2[i][j] << " ";
    }
    cout << endl;
  }
}
