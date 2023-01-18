// Program which passes an integer array to function 'printNumbers', and prints the array

extern int *readNumbers(int n) ;
extern void printNumbers(int *numbers,int length) ;
 
int main()
{
  int length = 10;
  int *numbers = new int[length]; // Declare new int array

  numbers = readNumbers(length);
  printNumbers(numbers, length);

  delete[] numbers;
}
