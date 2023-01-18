#include <iostream>
using namespace std;

extern int max_integer(int integers[], int length);
extern int min_integer(int integers[], int length);

int sum_min_and_max(int integers[], int length)
{
  if (length > 0) {
    return max_integer(integers, length) + min_integer(integers, length);
  }
  else {
    return -1;
  }
}

int max_integer(int integers[], int length)
{
  int maximum = integers[0];

  for (size_t i = 0; i < length; i++) {

    if (integers[i] > maximum) {
      maximum = integers[i];
    }
  }

  return maximum;
}

int min_integer(int integers[], int length)
{
  int minimum = integers[0];

  for (size_t i = 0; i < length; i++) {

    if (integers[i] < minimum) {
      minimum = integers[i];
    }
  }

  return minimum;
}
