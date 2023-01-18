#include <iostream>

double average(int array[], int n)
{
  int total = 0;
  
  if (n > 1) {

    for (size_t i = 0; i < n; i++) {
      total += array[i];
    }

    return (float) total / n;
  }
  else {
    return 0.0;
  }
}
