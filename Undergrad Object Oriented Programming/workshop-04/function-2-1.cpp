#include <iostream>
#include <string>
using namespace std;

float add_op(float left, float right);
float subtract_op(float left, float right);

float add_op(float left, float right)
{
  return left + right;  
}

float subtract_op(float left, float right)
{
  return left - right;
}

float arithmetic_ops(float left, float right, string op)
{
  string addition = "addition";
  
  if (addition.compare(op) == 0) {

    return add_op(left, right);
  }
  else {
    return subtract_op(left, right);
  }
}


