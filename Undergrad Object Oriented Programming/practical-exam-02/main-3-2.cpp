// Program uses function 'reverseArray' to take an int array and return it to main in reversed order.
// The program then prints the array.

extern int *readNumbers(int n);
extern void printNumbers(int *numbers,int length);
extern int *reverseArray(int *numbers,int length);
 
int main()
{
  int length = 10;
  int *numbers = new int[length];

  numbers = readNumbers(length);
  numbers = reverseArray(numbers, length);
  printNumbers(numbers, length);

  delete[] numbers;
}
