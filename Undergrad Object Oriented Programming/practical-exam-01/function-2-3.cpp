#include <iostream>
using namespace std;

int sum_if_a_palindrome(int integers[], int length);
bool is_a_palindrome(int integers[], int length);

int sum_elements(int integers[], int length)
{
  int sum = 0;

  for (size_t i = 0; i < length; i++) {

    sum += integers[i];  
  }
  return sum;
}

int sum_if_a_palindrome(int integers[], int length)
{
  if (length > 0) {
   
    if (is_a_palindrome(integers, length) == 1) {
      return sum_elements(integers, length);
    }
    else {
      return -2;
    }
  }
  else {
    return -1;
  }
}

bool is_a_palindrome(int integers[], int length)
{
  length--;

  for (size_t i = 0; i < length; i++) {

    if (integers[i] != integers[length - i]) {
      return false;
    }
    else {
      continue;
    }
  }
  return true;
}

