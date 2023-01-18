#include <iostream>
using namespace std;

// Function 'readNumbers' takes a pointer to an int array and initialises it based on user input

int *readNumbers(int n)
{
  int *array = new int[n];

  for (int i = 0; i < n; i++) {

    cin >> *(array + i);
  }

  return array;
}

// Function 'semesterNames' takes a pointer to an int array and uses a switch statement
// to print information about the relevant semester (line number, semester code, semester name)

void semesterNames(int *semesters,int length)
{
  for (int i = 0; i < length; i++) {

    int semesterName = *(semesters + i); // Assign semester code to variable 'semesterName';
                                         // necessary as switch arguments won't take variables

    switch (semesterName) {

    case 10:
      cout << i << " " << semesterName << " " << "Semester 1" << endl;
      break;

    case 20:
      cout << i << " " << semesterName << " " << "Semester 2" << endl;
      break;

    case 33:
      cout << i << " " << semesterName << " " << "Trimester 1" << endl;
      break;

    case 36:
      cout << i << " " << semesterName << " " << "Trimester 2" << endl;
      break;

    case 39:
      cout << i << " " << semesterName << " " << "Trimester 3" << endl;
      break;
    }
  }
}

