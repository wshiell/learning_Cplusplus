#include <iostream>

int maximum(int array[], int n)
{
  int maximum = array[0];
  
  if (n > 1) {

    for (size_t i = 1; i < n; i++) {

      if (array[i] > maximum) {
	maximum = array[i];
      }
    }
    
    return maximum;
  }
  else {
    return 0;
  }
}
