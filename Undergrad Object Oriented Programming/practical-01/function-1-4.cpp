#include <iostream>

int sumtwo(int array[], int secondaryarray[], int n)
{
  int total = 0;
  
  if (n > 1) {

    for (size_t i = 0; i < n; i++) {

      total += array[i] + secondaryarray[i];
    }

    return total;
  }
  else {
    return 0;
  }
}
