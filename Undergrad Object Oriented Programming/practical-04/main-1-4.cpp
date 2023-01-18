#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

extern void cpyda(double *old_array, double *new_array, int length);

int main()
{
  srand(time(NULL));

//   int width = 5, breadth = 2;
//   double oldArray[][2] = {{1,1},{4,4},{9,9},{-714,-714},{12,12}};
//   double newArray[width][breadth];

//   double *old_array, *new_array;

//   old_array = &oldArray[0][0];
//   new_array = &newArray[0][0];

//   int length = width * breadth;
    
//   cpyda(old_array, new_array, length);
// }
  unsigned int length = 10;
  double array1[length][length];
  double array2[length][length];
  double *old_array, *new_array;

  old_array = &array1[0][0];
  new_array = &array2[0][0];  

  for (size_t i = 0; i < length; i++) {

    for (size_t j = 0; j < length; j++) {
      
      array1[i][j] = (double) (rand() % 100 + 1) / 10;
    }
  }

  cpyda(old_array, new_array, length);
  
  for (size_t i = 0; i < length; i++) {

    for (size_t j = 0; j < length; j++) {
      
      cout << setw(4) << array1[i][j] << " ";
    }
    cout << endl;
  }

  
  cout << endl;
  
  for (size_t i = 0; i < length; i++) {

    for (size_t j = 0; j < length; j++) {
      
      cout << setw(4) << array2[i][j] << " ";
    }
    cout << endl;
  }
}

