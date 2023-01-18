// Course: Object Oriented Programming
// Practical #
// Author: Zachary Forman
// Student ID: 1632538
// Description: Driver program to test Person class

// Compilation: "g++ driver.cpp Person.cpp -o driver"
// or run make with the provided makefile.

#include "Person.h"
#include <iostream>  // For input/output
#include <ctime>     // For time
#include <cstdlib>   // srand

// Dumps info about a person to stdout, followed by a newline.
void printInfo(Person p)
{
	std::cout << p.getName() << " is a " 
		      << p.getJob() << " who is "
		      << p.getAge(2014, 9, 5) << " years old.\n"
		      << "They are currently ";
	if (p.isHungry(9))
	{
		std::cout << "hungry.\n";
	} else
	{
		std::cout << "not hungry.\n";
	}
}

// argc is the number of arguments given to your program.
// argv is the array of arguments given.
// For example, if we call "./driver a b", then
// argc = 5
// argv[0] = "./driver"
// argv[1] = "a"
// argv[2] = "b"
int main(int argc, char *argv[])
{
	srand(time(NULL));

	// Construct a person object on the stack, and assign it to p1
	Person p1("Zachary Forman", "Workshop Supervisor", 1994, 10, 22);

	// Construct a person object on the heap, and set p2 to point to it
	Person *p2 = new Person("John French", "UNKNOWN", 1992, 9, 4);

	// Dump information
	printInfo(p1);
	printInfo(*p2);

	// update p2
	p2->eatFood(7);
	p2->changeJobs("Student");

	// Dump information
	printInfo(*p2);

	// clean up
	delete p2;

	return 0;
}
