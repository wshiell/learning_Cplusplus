#include <iostream>
using namespace std;

extern int count(int[], int);


int main() {
    int array1[5] = {4,5,6,7,8};
    int array2[5] = {-5,7,4,10,-2};
    
    cout << "The number is: " << count(array1, 5) << endl;
    cout << "The number is: " << count(array2, 5) << endl;
    
    return 0;
}

// int main()
// {
//   int array[5];
//   int element;

//   cout << "\n** Welcome to the Positive Integer Addition Program! **"
//        << endl;
//   cout << "\nEnter 5 positive integers (-1 to end): " << "\n\n> ";

//   cin >> element;
//   array[0] = element;
  
//   while (element != -1) {

//     for (size_t i = 1; i < 5; i++) {

//       cin >> array[i];
//     }

//     cout << "\nThe sum of the even numbers is: " << count(array, 5) << endl;

//     cout << "\nEnter 5 positive integers (-1 to end): " << "\n\n> ";    
//     cin >> element;
//     array[0] = element;
//   }
// }
