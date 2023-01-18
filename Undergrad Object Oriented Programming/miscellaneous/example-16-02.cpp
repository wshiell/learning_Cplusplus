// example-16-02
// What output do you expect?

#include <iostream>
using namespace std;

class X
{
public:
  virtual void f()
  {
    cout << "X::f()" << endl;
  }
  void g()
  {
    cout << "X::g()" << endl;
  }
  void h()
  {
    cout << "X::h()" << endl;
    f();
    g();
  }
};

class Y : public X
{
public:
  virtual void f() override
  {
    cout << "Y::f()" << endl;
  }
  void g()
  {
    cout << "Y::g()" << endl;
  }
};

int main()
{
  X x;
  x.h();
  Y y;
  y.h();
  y.g();
  X *p = new Y();
  p->h();
  delete p;
}
