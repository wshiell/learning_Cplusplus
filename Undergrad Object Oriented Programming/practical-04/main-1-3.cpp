#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

extern void cpyia(int old_array[], int new_array[], int length);

int main()
{
  srand(time(NULL));

  int length = 10;
  int old_array[length];

  for (size_t i = 0; i < length; i++) {

    old_array[i] = rand() % 10 + 1;
  }
  
  int new_array[length];

  cpyia(old_array, new_array, length);

  for (size_t i = 0; i < length; i++) {

    cout << old_array[i] << " ";
  }
  cout << endl;

  for (size_t i = 0; i < length; i++) {

    cout << new_array[i] << " ";
  }
  cout << endl;
}
