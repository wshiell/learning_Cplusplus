// example-16-05
// Is this compilable? How can you change the code in the main function to
// access function foo(3)?

// As it stands, the program will not compile. Objects of class Sub do have
// access to function foo( int ) in class Super, but when a call is made to
// it, the compiler replaces Super::foo( int ) with Sub::foo(), due to the
// creation of a default constructor Sub() which takes 0 or more integer
// arguments. To access foo( int ) in main, declaire 'mySub' to be an
// object of type Super.
// Alternatively, you can declare a pointer to an object of type Super,
// and assign to it memory from the heap associated with a pointer of type
// Sub. This is possible because objects of type Sub are also objects of
// type pointer (Sub 'is-a' Super). You can then use that pointer
// too access Super::foo( int )

#include <iostream>
using namespace std;

class Super
{
public:
  virtual void foo()
  {
    cout << "Super::foo()" << endl;
  }

  virtual void foo(int i)
  {
    cout << "Super::foo(" << i << ")" << endl;
  }
};

class Sub : public Super
{
public:
  virtual void foo()
  {
    cout << "Sub::foo()" << endl;
  }
};

int main()
{
  Super *mySub = new Sub();
  mySub->foo(3);
  //  delete mySub;
}
