#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void print_class(string courses[4], string students[], int report_card[][4], int nstudents);

int main()
{
  srand(time(NULL));
  
  string courses[4];
  int nstudents;

  for (size_t i = 0; i < 4; i++) {
    
    cout << "Enter course name:" << endl;
    cin >> courses[i];
  }

  cout << "Enter number of students enrolled:" << endl;
  cin >> nstudents;

  string *students = new string[nstudents];
  int **report_card = new int*[nstudents];

  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  for (size_t i = 0; i < nstudents; i++) {
    
    cout << "Enter student name:" << endl;
    cin >> courses[i];
  }

  for (size_t i = 0; i < nstudents; i++) {

    for (size_t j = 0; j < 4; j++) {

      report_card[i][j] = rand() % 100 + 1;
    }
  }
  print_class(courses, students, report_card, nstudents);
}
