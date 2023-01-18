#include <iostream>
#include <iomanip>
using namespace std;

int *readNumbers()
{
  int *arrayPtr = new int[10];

  for (int i = 0; i < 10; i++) {

    cin >> *(arrayPtr + i);
  }

  return arrayPtr;
}

int maximum(int *numbers, int length)
{
  int max = 0;

  for (int i = 0; i < length; i++) {

    max += *(numbers + i);
  }

  return max;
}

int secondSmallestSum(int *numbers,int length)
{
  int smallest, secondSmallest, sum;

  smallest = secondSmallest = maximum(numbers, length);
  //  cout << "Max is " << secondSmallest << endl;
  
  for (int i = 0; i < length; i++) {

    for (int j = i; j < length; j++) {

      sum = 0;

      for (int k = i ; k <= j; k++) {

	sum += *(numbers + k);
      }

      //      cout << setw(4) << sum << " ";
      
      if (sum <= smallest) {
	secondSmallest = smallest;
	smallest = sum;
      }
      else if (sum < secondSmallest) {
	secondSmallest = sum;
      }

      // if ((sum < secondSmallest) && (sum > smallest)) {
      // 	secondSmallest = smallest;
      // }

      //     cout << setw(4) << sum << " ";
    }
    //   cout << endl;
  }

  return secondSmallest;
}
