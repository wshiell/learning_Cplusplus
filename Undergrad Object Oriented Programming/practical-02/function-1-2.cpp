#include <iostream>
using namespace std;

int identity(int array[10][10])
{
  bool ident = true;

  for (size_t i = 0; i < 10; i++) {

    for (size_t j = 0; j < 10; j++) {

      if ((array[i][j] == 1 && i == j) || (array[i][j] == 0 && i != j)) {
	continue;
      }
      else {
	ident = false;
	return false;
      }
    }
  }
  
  return ident;
}
