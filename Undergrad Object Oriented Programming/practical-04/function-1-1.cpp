#include <iostream>
using namespace std;

void copy_2d_strings(string first[][2], string second[][2], int n)
{
  for (size_t i = 0; i < n; i++) {

    for (size_t j = 0; j < 2; j++) {

      second[i][j] = first[i][j];
    }
  }  
}
