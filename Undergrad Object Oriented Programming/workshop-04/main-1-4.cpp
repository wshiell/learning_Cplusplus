#include <iostream>
using namespace std;

extern int size_of_variable_star_arr();

int main()
{
  cout << "Size of the memory location which stores arr: " << size_of_variable_star_arr() << endl;
}
