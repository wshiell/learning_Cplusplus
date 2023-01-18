#include <iostream>
#include <iomanip>
using namespace std;

extern int sum_if_a_palindrome(int integers[], int length);

int main()
{
  int integers[] = { 1, 2, 3, 3, 2, 1};
  int length = sizeof(integers) / sizeof(int);

  cout << sum_if_a_palindrome(integers, length) << endl;
}
