# Course: Object Oriented Programming
# Practical #
# Author: Zachary Forman
# Student ID: 1632538
# Description: Makefile for Person Class Example

# default target is all
all: driver

# driver is made by linking object files together
driver: Person.o driver.o
	g++ Person.o driver.o -o driver

# the Person.o object file needs recompiled if Person.cpp or Person.h changes
Person.o: Person.cpp Person.h
	g++ -c Person.cpp -o Person.o

# the driver.o object file needs recompiled if driver.cpp or Person.h changes
driver.o: driver.cpp Person.h
	g++ -c driver.cpp -o driver.o

# clean removes all object files and the compiled executable
clean:
	rm -f *.o driver
