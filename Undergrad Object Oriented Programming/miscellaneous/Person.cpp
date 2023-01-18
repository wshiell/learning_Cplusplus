// Course: Object Oriented Programming
// Practical #
// Author: Zachary Forman
// Student ID: 1632538
// Description: Implementation of basic person class

#include "Person.h"
#include <cstdlib>   // For rand()

// Person Constructor.
// This constructor features an 'initialiser list' after the method name (the colon and
// everything after it). An 'initialiser list' is a short-hand way of assigning variables
// in a class. Instead of saying `m_year = year` inside the body of the constructor, we can
// instead write m_year(year) in the initialiser list to be more concise.
// In addition to this, member variables marked "const" MUST be initialised in an
// initialiser list, otherwise the compiler will complain.
Person::Person(std::string name, std::string job, int year, int month, int day)
	: m_name(name), m_job(job), m_year_of_birth(year), m_month_of_birth(month), m_day_of_birth(day) 
{
	m_hour_last_ate = (rand() % 12) + 1;
}

// 'implementation' of Person's destructor.
Person::~Person() {
/* This is a boring 'default destructor'.
 * Really, there's nothing here.
 * Who reads comments longer than one line anyway?
 * To make this comment slightly more interesting,
 * I give you a dragon reciting a haiku.
 *  _______________________
 * < A good haiku is       >
 * < Not a haiku without a >
 * < Refrigerator          >
 *  -----------------------
 *       \                   / \  // \
 *        \    |\___/|      /   \//  \\
 *             /0  0  \__  /    //  | \ \    
 *            /     /  \/_/    //   |  \  \  
 *            @_^_@'/   \/_   //    |   \   \
 *            // _^_/     \/_ //     |    \    \
 *         ( // ) |        \///      |     \     \
 *       ( / /) _|_ /   )  //       |      \     _\
 *     ( // /) '/,_ _ _/  ( ; -.    |    _ _\.-~        .-~~~^-.
 *   (( / / )) ,-{        _      `-.|.-~-.           .~         `.
 *  (( // / ))  '/\      /                 ~-. _ .-~      .-~^-.  \
 *  (( // / ))      `.   {            }                   /      \  \
 *   (( / ))     .----~-.\        \-'                 .~         \  `. \^-.
 *              // /.----..>        \             _ -~             `.  ^-`  ^-_
 *                // /-._ _ _ _ _ _ _}^ - - - - ~                     ~-- ,.-~
 *                                                                   /.-~
 * */
}

// Implementation of Person's getAge method
int Person::getAge(int current_year, int current_month, int current_day) const
{
	int age = 0;
	age = current_year - m_year_of_birth;
	if (current_day < m_day_of_birth || current_month < m_month_of_birth)
	{
		age = age - 1;
	}
	return age;
}

// Implementation of Person's getName method
std::string Person::getName() const
{
	return m_name;
}

// Implementation of Person's getJob method
std::string Person::getJob() const
{
	return m_job;
}

// Changes the Person's job
void Person::changeJobs(std::string new_job)
{
	// Could equally use m_job = new_job;
	// `this` is only used as an example
	// usage of the `this` keyword.
	this->m_job = new_job;
}

// Makes the Person eat food.
// Notice this method cannot be `const` as we
// modify the member variable m_hour_last_ate.
void Person::eatFood(int hour)
{
	m_hour_last_ate = hour;
}

// Determines whether a Person is hungry
bool Person::isHungry(int hour) const
{
	return (hour - m_hour_last_ate) > TIME_TO_HUNGRY;
}
