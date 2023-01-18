// example-16-04
// What output do you expect?

// function g() will be passed instantiated objects of classes A and B, then
// use those objects to access the appropriate versions of function  f(),
// passing in the values of 0 and 1 respectively. Because B::f(int) calls
// A::f(int), but passes an argument of twice the size to it, B::f(int) will
// print it's argument multiplied by two. The program will print 0 then a 
// space, followed by 1 * 2 and a space.
// Note: function f(int) in both class A and class B *should* return an int,
// but neither function does this. The program will compile, but with
// warnings.

#include <iostream>
using namespace std;

class A
{
public:
  int f(int x)
  {
    cout << x << " ";
  }
};

class B: public A
{
public:
  int f(int y)
  {
    A::f(2*y);
  }
};

void g(A a, B b)
{
  a.f(0);
  b.f(1);
}

int main() {
  B a;
  B b;
  g(a,b);
}
