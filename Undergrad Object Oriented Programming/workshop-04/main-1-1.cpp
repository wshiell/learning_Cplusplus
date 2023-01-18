#include <iostream>
using namespace std;

extern int size_of_variable_star_t();

int main()
{
  cout << "Size of the memory location which stores t: " << size_of_variable_star_t() << endl;
}
