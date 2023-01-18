#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

extern void copy_2d_strings(string first[][2], string second[][2], int n);

int main()
{
  srand(time(NULL));
  
  string array1[3][2] = { { "Do", "Re" }, { "Mi", "Fa" }, { "So", "La" } };
  string array2[3][2];

  copy_2d_strings(array1, array2, 3);
}
