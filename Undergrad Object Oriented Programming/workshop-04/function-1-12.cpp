#include <iostream>
using namespace std;

int size_of_variable_star_arr()
{
  // int a, *p;
  // p = &a;

  // int *t = new int;
  int *arr = new int[3];

  delete[] arr;
  
  cout << "First element of arr: " << arr[0] << endl;
  
  return sizeof(arr);
}
