#include <iostream>
using namespace std;

int main()
{
  int rows = 8;
  int columns = 8;
  int sub_rows = 7;
  int sub_columns = 14;
  int cell_number = 0;

  for ( int i = 0; i < rows; i++ ) {

    for ( int j = 0; j < sub_rows; j++ ) {

      for ( int k = 0; k < columns; k++ ) {

	for ( int l = 0; l < sub_columns; l++ ) {
	  
	  if ( ( cell_number + 1 ) % 2 == 0 ) {
	    cout << "\033[30;47m \033[0m";
	  }
	  else {
	    cout << "\033[40;37m \033[0m";
	  }
	}
	cell_number++;
      }
      cout << endl;
    }
    cell_number++;
  }
}
