#include <iostream>

int sum_array(int array[], int n)
{
  int total = 0;
  
  if (n > 1) {

    for (size_t i = 0; i < n; i++) {
      total += array[i];
    }

    return total;
  }
  else {
    return 0;
  }
}
