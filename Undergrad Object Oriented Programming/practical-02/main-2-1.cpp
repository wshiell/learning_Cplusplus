#include <iostream>
#include <string>
using namespace std;

extern void print_as_binary(string decimal_number);

int main()
{
  string decimal_number;

  cout << "Enter a decimal number with between 1 and 9 digits:" << endl;
  cin >> decimal_number;

  print_as_binary(decimal_number);
}
