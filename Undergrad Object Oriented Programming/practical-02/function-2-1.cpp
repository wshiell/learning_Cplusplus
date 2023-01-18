#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void print_as_binary(string decimal_number)
{
  int integer = stoi(decimal_number);

  string binary = bitset<30>(integer).to_string();

  binary.erase(0, min(binary.find_first_not_of('0'), binary.size() - 1));
  cout << binary << endl;
}
