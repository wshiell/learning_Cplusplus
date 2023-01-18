#include <iostream>

int size_of_array_arr()
{
  // int a, *p;
  // p = &a;

  // int *t = new int;
  int *arr = new int[3];
  
  return sizeof(arr) * 3;
}
