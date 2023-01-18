// Program passes an int array to function 'palindrome', and determines whether or not the
// array is palindromic: returns true if it is, false if it is not, and false if the
// array length is less than 1

#include <iostream>
using namespace std;

extern int *readNumbers(int n) ;
extern bool palindrome(int *numbers,int length) ;
 
int main()
{
  int length = 10;

  if (length > 0) {

    int *numbers = new int[length];

    numbers = readNumbers(length);

    if (palindrome(numbers, length)) {
      cout << "True" << endl;  
    }
    else {
      cout << "False" << endl;
    }
 
   delete[] numbers;
  }
  else {
    cout << "False" << endl;
  }
}
