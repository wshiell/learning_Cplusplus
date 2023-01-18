//  ************************************************
//  *
//  *    main-1-2.cpp
//  *    Author: Wade Shiell
//  *
//  ************************************************

#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main()
{
  int number = 4;
  // string people[number] = { "Brian Appleyard", "Magnus Forli",
  // 		       "Patricia Banana", "Bono" };
  // int salaries[number] = { 34000, 45000, 89000, 23000 };

  // Create several person objects and initiate to zero/NULL

  person **personPtr = new person*[number];

  // for (int i = 0; i < number; i++) {

  //   personPtr[i] = new person("", 0);
  // }

  // Display the initial state of the person objects
  
  // for (int i = 0; i < number; i++) {

  //   cout << "Initial name of person " << (i + 1) << " is "
  // 	 << personPtr[i]->getName() << endl;
  //   cout << "Initial salary of person " << (i + 1) << " is $" 
  // 	 << personPtr[i]->getSalary() << endl;
  // }
  // cout << endl;

  // Update the name and salary of the person objects
  
  // for (int i = 0; i < number; i++) {

  //   personPtr[i]->setName(people[i]);
  //   personPtr[i]->setSalary(salaries[i]);
  // }

  // Display the updated states of the person objects
  
  // for (int i = 0; i < number; i++) {

  //   cout << "Updated name of person " << (i + 1) << " is "
  // 	 << personPtr[i]->getName() << endl;
  //   cout << personPtr[i]->getName() << "'s updated salary is $"
  // 	 << personPtr[i]->getSalary() << endl;
  // }

  delete[] personPtr;
}
