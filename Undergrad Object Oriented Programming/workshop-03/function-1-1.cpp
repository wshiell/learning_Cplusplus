#include <iostream>
using namespace std;

void printer(int array[10][10])
{
  for (size_t i = 0; i < 10; i++) {

    for (size_t j = 0; j < 10; j++) {

      cout << array[i][j];

      if (j != 9) {
	cout << " ";
      }
      else {
	continue;
      }
    }
    cout << endl;
  }
}
