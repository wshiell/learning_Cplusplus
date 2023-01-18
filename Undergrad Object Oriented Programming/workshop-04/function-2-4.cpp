#include <iostream>
using namespace std;

float arithmetic_op(float left, float right, float (*op)(float, float))
{
  return (*op)(left, right);
}

float add_ops(float left, float right)
{
  return left + right;
}
float subtract_ops(float left, float right)
{
  return left - right;
}

float multiply_op(float left, float right)
{
  return left * right;
}
