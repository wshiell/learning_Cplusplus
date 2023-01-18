#include <iostream>

int count(int array[], int n, int p)
{
  int total = 0;
  
  if (n > 1) {

    for (size_t i = 0; i < n; i++) {

      if (array[i] == p) {
	total++;
      }
    }

    return total;
  }
  else {
    return 0;
  }
}
