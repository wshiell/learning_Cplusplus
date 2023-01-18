#include <iostream>
#include <tgmath.h>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits)
{
  int number_as_integer = 0;

  for (size_t i = 0; i < number_of_digits; i++) {

    number_as_integer += binary_digits[i] * pow(2, (number_of_digits - 1) - i);
  }

  return number_as_integer;
}
