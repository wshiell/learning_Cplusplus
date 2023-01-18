#include <iostream>
using namespace std;

int main()
{
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *arrayPtr = &array[0];

  for (int i = 0; i < 10; i++) {

    cout << *arrayPtr++ << " ";
  }
  cout << endl;
}
