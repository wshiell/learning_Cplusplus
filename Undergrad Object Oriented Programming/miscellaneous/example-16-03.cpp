// example-16-03
// Which of these class declarations will cause a compilation error and why?
// Comment/uncomment them and play to understand the issues.

// Class A is an abstract class due to the presence of a pure virtual
// function. For this reason, you cannot instantiate objects of class A's
// type, so if an attempt to do this is made, the compiler will issue an
// error message

#include <iostream>
using namespace std;

// class A
// {
// public:
//   int i;
//   virtual void f() = 0;
// protected:
//   int j;
// };

// Class B inherits from class A, and because class A is an abstract class,
// class B needs to implement the pure virtual functions from A, otherwise
// it will inherit A's functions and also become abstract

// class B: public A
// {
//   virtual void f() override
//   {
    
//   }
// private:
//   int k;
// };

// Class C, which is a derived class (of class A) implements the pure
// virtual function f() in class A, so the program should compile based on
// this. However, the statement 'A *a = new A();' will cause an error,
// because the program is attempting to assign memory to an object of
// class A.
// Because class A is abstract, memory cannot be allocated to objects of
// its type because it is not known ahead of time how much memory to
// allocate. Change the statement to 'A *a = new C();' and the program will
// compile.
// Only ember functions of derived classes have access to the protected
// members of their base classes, so objects of class C should not be able
// to access elements i and j of class A via a pointer, thus the compiler
// will issue an error message.
// Finally, f() in class C has been declared private (by default), so when
// objects of class C are instantiated in main, they will not have access to
// this function. Either create a 'get' function to access f(), or declare
// f() to be public. To give class C access to the protected members of
// class A, declare C to be a friend of A with 'friend class C' in class A

// class C : public A
// {
//   virtual void f() override
//   {
//     A *a = new C();
//     a->j = a->i;
//   }
// };

// Class D does not provide an implementation for pure virtual function f()
// declared in class A, so it will also be an abstract class. The compiler
// will issue an error message. Implement f() in class D to solve this

// class D: public A
// {

// };

// Class E is indirectly a derived class of class A, so it does not have
// access to protected member j via pointers, but it *can* access j in
// member functions. The program will compile properly..

// class E: public B
// {
// public:
//   virtual void f() override
//   {
//     i = j;
//   }
// };

// Class F is a directly derived class of class B, and an indirectly
// derived class of class A. Consequently it can access the protected
// members in both A and B via member functions. However, private members
// of both direct and indirect base classes are private to the derived
// class F, so instantiated objects of class F will not have access to
// member k of class B. Thus the compiler will issue a message.

// class F: public B
// {
//   void f()
//   {
//     j = k;
//   }
// };

// Class G is not derived from any other class, but it has access to
// the member functions in class A and E via the pointer to a class A
// object declared in it's version of f(). The program will compile
// correctly.

// class G
// {
// public:
//   void f()
//   {
//     A *a = new E();
//     a->f();
//   }
// };

// Class H is not derived from any other class, but it has access to the
// member functions of B via the object of class B instantiated in H's
// version of f(). However, because f() in class B is private (by default)
// it cannot be accessed outside of objects of class B. Thus the compiler
// will display an error message when B::f() is called

// class H
// {
//   void f()
//   {
//     B b;
//     b.f();
//   }
// };

// Class I is not derived from any other class, nor does it make calls
// to members of any other class. The program will compile correctly.

// class I
// {
// public:
//   int a;
// protected:
//   int b;
// };

// Class J is not derived from any other class, so it does not have direct
// access to the member functions of other classes. It can access public
// members of other classes directly and private or protected  members of
// other functionsvia public get functions belonging to other classes.
// Because int b in class I is protected, objects of class J cannot access
// b directly. Because pointer i declared in J::f() tries to access b,
// the compiler will issue an error message.

// class J
// {
//   void f()
//   {
//     I *i = new I();
//     i->a = i->b;
//   }
// };


int main()
{

}
