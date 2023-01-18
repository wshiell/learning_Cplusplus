#include <iostream>
using namespace std;

void count_numbers(int array[4][4])
{
  int zeroes = 0, ones = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixes = 0;
  int sevens = 0, eights = 0, nines = 0;

  for (size_t i = 0; i < 4; i++) {

    for (size_t j = 0; j < 4; j++) {

      switch (array[i][j]) {
      case 0:
	zeroes++;
	break;
      case 1:
	ones++;
	break;
      case 2:
	twos++;
	break;
      case 3:
	threes++;
	break;
      case 4:
	fours++;
	break;
      case 5:
	fives++;
	break;
      case 6:
	sixes++;
	break;
      case 7:
	sevens++;
	break;
      case 8:
	eights++;
	break;
      case 9:
	nines++;
	break;
      }
    }
  }

  cout << 0 << ":" << zeroes << ";";
  cout << 1 << ":" << ones << ";";
  cout << 2 << ":" << twos << ";";
  cout << 3 << ":" << threes << ";";
  cout << 4 << ":" << fours << ";";
  cout << 5 << ":" << fives << ";";
  cout << 6 << ":" << sixes << ";";
  cout << 7 << ":" << sevens << ";";
  cout << 8 << ":" << eights << ";";
  cout << 9 << ":" << nines << ";" << endl;
}
