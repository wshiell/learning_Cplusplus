#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers,int length);

int main()
{
  int length = 10;
  int *numbers1, *numbers2;
  
  if (length > 0) {

    numbers1 = new int[length];
    numbers2 = new int[length];
    
    numbers1 = readNumbers();
    numbers2 = reverseArray(numbers1, length);

    if (equalsArray(numbers1, numbers2, length)) {
      cout << "True" << endl;
    }
    else {
      cout << "False" << endl;
    }

    delete[] numbers1;
    delete[] numbers2;    
  }
  else {
    cout << "Invalid array." << endl;
  }
}
