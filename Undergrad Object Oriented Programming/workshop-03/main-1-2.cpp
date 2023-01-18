#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void print_class(string courses[4], string students[], int report_card[][4], int nstudents);

int main()
{
  srand(time(NULL));
  
  string courses[] = { "Maths", "Physics", "Chemistry", "Biology" };
  string students[] = { "Adams", "Smith", "Zachary" };
  int nstudents = sizeof(students) / sizeof(string);
  int report_card[nstudents][4];

  for (size_t i = 0; i < nstudents; i++) {

    for (size_t j = 0; j < 4; j++) {

      report_card[i][j] = rand() % 100 + 1;
    }
  }
  print_class(courses, students, report_card, nstudents);
}
