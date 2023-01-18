#include <iostream>
#include <math.h>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits)
{
  int decimal_number = 0;

  for (size_t i = 0; i < number_of_digits; i++) {

      decimal_number += binary_digits[i] * pow(2, (number_of_digits - 1) - i);
  }

  return decimal_number;
}
