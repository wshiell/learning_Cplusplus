#include <iostream>
using namespace std;

extern void print_summed_matrices(int array1[3][3], int array2[3][3]);

int main()
{
  int array1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  int array2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };;

  // cout << "Enter the elements of array1: " << endl;

  // for (size_t i = 0; i < 3; i++) {

  //   for (size_t j = 0; j < 3; j++) {

  //     cout << "Element(" << i + 1 << ", " << j + 1 << "): ";
  //     cin >> array1[i][j];    
  //   }
  // }

  // cout << "Enter the elements of array2: " << endl;

  // for (size_t i = 0; i < 3; i++) {

  //   for (size_t j = 0; j < 3; j++) {

  //     cout << "Element(" << i + 1 << ", " << j + 1 << "): ";      
  //     cin >> array2[i][j];
  //   }
  // }

  print_summed_matrices(array1, array2);
}
