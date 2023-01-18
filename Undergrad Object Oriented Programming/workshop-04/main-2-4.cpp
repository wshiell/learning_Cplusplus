#include <iostream>
using namespace std;

extern float arithmetic_op(float left, float right, float (*op)(float, float));
extern float add_ops(float left, float right);
extern float subtract_ops(float left, float right);
extern float multiply_op(float left, float right);

int main()
{
  float left, right;
  int choice;
  float (*op[3])(float, float) = { add_ops, subtract_ops, multiply_op };
  
  cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication "
       << "(-1 to end): " << endl;
  cin >> choice;

  while (choice != -1) {

    cout << "Enter a floating-point number: " << endl;
    cin >> left;

    cout << "Enter another floating-point number: " << endl;
    cin >> right;

    float result = arithmetic_op(left, right, op[choice - 1]);
     // float result = f[choice - 1](left, right);

    if (choice == 1) {
      cout << left << " + " << right << " = " << result;
    }
    else if (choice == 2) {
      cout << left << " - " << right << " = " << result;    
    }
    else {
      cout << left << " * " << right << " = " << result;    
    }
    cout << endl;

    cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication "
	 << "(-1 to end): " << endl;
    cin >> choice;
  }
}
