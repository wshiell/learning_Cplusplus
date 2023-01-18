#include <iostream>
#include <string>
using namespace std;

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main()
{
  string binary;
  
  cout << "Enter a binary number: " << endl;
  cin >> binary;

  int number_of_digits = binary.size();
  int binary_digits[number_of_digits];

  for (size_t i = 0; i < number_of_digits; i++) {

    binary_digits[i] = binary[i] - 48;
  }

  cout << "The binary number as a decimal number is "
       << binary_to_number(binary_digits, number_of_digits) << endl;
}
