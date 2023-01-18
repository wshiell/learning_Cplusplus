#include <iostream>

int minimum(int array[], int n)
{
  int minimum = array[0];
  
  if (n > 1) {

    for (size_t i = 1; i < n; i++) {

      if (array[i] < minimum) {
	minimum = array[i];
      }
    }
    
    return minimum;
  }
  else {
    return 0;
  }
}
