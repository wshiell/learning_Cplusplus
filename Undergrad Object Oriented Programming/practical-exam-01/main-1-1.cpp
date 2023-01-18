#include <iostream>
#include <ctime>
#include <cstdlib>

extern void printer(int array[10][10]);

using namespace std;

int main()
{
  srand(time(NULL));
  int array[10][10];

  for (size_t i = 0; i < 10; i++) {

    for (size_t j = 0; j < 10; j++) {

      array[i][j] = rand() % 100 + 1;
    }
  }
  printer(array);
}
