#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

extern void printer(int array[10][10]);

int main()
{
  srand(time(NULL));
  int array[10][10];
  
  for (size_t i = 0; i < 10; i++) {

    for (size_t j = 0; j < 10; j++) {

      array[i][j] = rand() % 100;
    }
  }
  printer(array);
}
