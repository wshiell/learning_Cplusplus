#include <iostream>
using namespace std;

extern int* readNumbers();
extern void hexDigits(int *numbers,int length);

int main()
{
  int *numbers = new int[10];
  int length = 10;

  numbers = readNumbers();  
  hexDigits(numbers, length);

  delete[] numbers;
}
