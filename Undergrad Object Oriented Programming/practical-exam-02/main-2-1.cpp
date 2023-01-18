// Program passes an int array corresponding to semester codes to function 'semesterNames', 
// and prints the line number, semester codes and corresponding semester names

#include <iostream>
using namespace std;

extern int *readNumbers(int n) ;
extern void semesterNames(int *semesters,int length) ;

int main()
{
  int length = 5;
  int *semesters = new int[length];

  semesters = readNumbers(length);
  semesterNames(semesters, length);

  delete[] semesters;
}
