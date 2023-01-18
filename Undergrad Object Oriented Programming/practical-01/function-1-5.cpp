#include <iostream>

int count_even(int number)
{
  int total = 0;
  
  if (number > 1) {

    for (size_t i = 0; i < number; i++) {

      if (i % 2 == 0) {
	
        total++;
      }

    }
    return total;
  }
  else {
    return 0;
  }
}
