#include <iostream>

int diagonal(int array[4][4])
{
  int sum = 0;

  for (size_t i = 0; i < 4; i++) {

    for (size_t j = 0; j < 4; j++) {

      if (i == j) {
	sum += array[i][j];
      }
    }
  }
  
  return sum;
}
