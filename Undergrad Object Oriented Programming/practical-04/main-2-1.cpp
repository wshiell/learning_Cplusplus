#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

extern void print_sevens(int *nums, int length);

int main()
{
  srand(time(NULL));
  
  int length = 100;
  int num_array[length];
  int *nums;

  nums = &num_array[0];

  for (size_t i = 0; i < length; i++) {

    num_array[i] = rand() % 50 + 1;
  }
  
  print_sevens(nums, length);
}
