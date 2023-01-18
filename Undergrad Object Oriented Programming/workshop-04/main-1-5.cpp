#include <iostream>
using namespace std;

extern int size_of_array_arr();

int main()
{
  cout << "Size of the memory location which stores the array corresponding to arr: "
       << size_of_array_arr() << endl;
}
