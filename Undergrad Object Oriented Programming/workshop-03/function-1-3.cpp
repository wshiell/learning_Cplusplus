#include <iostream>
using namespace std;

void print_class(string courses[4], string students[], int report_card[][4], int nstudents)
{
  cout << "Report Card ";

  for (size_t i = 0; i < 4; i++) {

    cout << courses[i];

    if ( i != 3) {
      cout << " ";
    }

  }
  cout << endl;
  
  for (size_t i = 0; i < nstudents; i++) {

    cout << students[i] << " ";
    
    for (size_t j = 0; j < 4; j++) {

      cout << report_card[i][j];

      if ((j == 3) && (i == (nstudents - 1))) {
	continue; 
      }
      else {
	cout << " ";
      }
      cout << endl;
    }
  }
}
