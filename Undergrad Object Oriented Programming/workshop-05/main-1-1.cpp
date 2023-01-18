extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main()
{
  //  int *numbers = new int[10];
  int *numbers = new int[10];
  int length = 10;
  
  numbers = readNumbers();
  printNumbers(numbers, length);

  delete[] numbers;
}
