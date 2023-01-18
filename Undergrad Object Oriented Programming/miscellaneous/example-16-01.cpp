// example-16-01
// What output do you expect?

#include <iostream>
using namespace std;

class b_Class
{
public:
  void f_1()
  {
    cout << "b_Class::f_1" << endl;
  }
  virtual void f_2()
  {
    cout << "b_Class::f_2" << endl;
  }
};

class d_Class : public b_Class
{
public:
  void f_1()
  {
    cout << "d_Class::f_1" << endl;
  }
  
  void f_2()
  {
    cout << "d_Class::f_2" << endl;
  }
};

int main()
{
  d_Class x;
  b_Class y;
  b_Class *c = new d_Class;
  
  x.f_1();
  x.f_2();
  y.f_1();
  y.f_2();
  c->f_1();
  c->f_2();
}
