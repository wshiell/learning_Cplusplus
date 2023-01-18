#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

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
  int *xPtr = &array[0][0];

  for (unsigned int i = 0; i < 10; i++) {

    for (unsigned int j = 0; j < 10; j++) {

      cout << setw(4) << *xPtr++;
    }
    cout << endl;
  }
}
