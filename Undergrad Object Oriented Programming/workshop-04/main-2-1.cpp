#include <iostream>
#include <string>
using namespace std;

extern float arithmetic_ops(float left, float right, string op);

int main()
{
  int choice;
  double left, right;
  string addition = "addition", subtraction = "subtraction";

  cout << "Enter left operand: " << endl;
  cin >> left;

  cout << "Enter right operand: " << endl;
  cin >> right;

  cout << "Enter 1 for addition, 2 for subtraction: " << endl;
  cin >> choice;
  
  if (choice == 1) {
    cout << left << " plus " << right << " = " << arithmetic_ops(left, right, addition) << endl;
  }
  else {
    cout << left << " minus " << right << " = " << arithmetic_ops(left, right, subtraction) << endl;
  }
}
