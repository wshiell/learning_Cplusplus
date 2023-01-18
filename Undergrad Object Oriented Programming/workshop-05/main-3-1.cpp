// Hi :) I have included comments below where I've made changes, with explanations
// as to why I made the change. I may have changed a few things and then neglected to
// include a comment to explain why, so if anything seems odd please let me know.

#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray (int *numbers1, int *numbers2, int length);

// Starting with main and for your other functions, I've shifted the left brace to the line below
// the function header. You'll notice that in most other cases, such as for if statements and
// for loops, I place the left brace after the conditional portion of the statement
// (ie. for (blah blah blah) {). When it comes to functions, I feel it's clearer to have the left and
// right braces lining up with each other in respect to the columns, so that when you're looking at
// your code you can tell where the function begins and ends a little more easily.

int main()
{

  // You'll see that I've added a 'length' variable to main(). This isn't strictly necessary for
  // the program to run as desired, but generally speaking it's good practice to use specific
  // identifiers for variables. Let's say that you wanted to change the length of your arrays.
  // If you declare a 'length' variable once, then you can be sure that it will also change in
  // every other place it's used throughout the program, whereas if you explicitly use a value,
  // say 10 like in this problem, then when/if you want to change your code to  describe arrays
  // of different lengths, you'll need to go through every line to make sure you change the numbers
  // to the new value.
  // I've also changed the way you've named your pointers throughout the code. If you have a single
  // pointer, you can get away with calling it 'ptr', but once you start using more of them this
  // becomes difficult to maintain. You could also use identifiers like 'ptr1', 'ptr2', etc, but
  // the disadvantage of this is that it introduces ambiguity about what the pointer is pointing at.
  // If you start the pointer name with something that suggests what it's going to be assigned,
  // that can make your code a lot easier to follow. So if your pointer is assigned to an array,
  // you might call it arrayPtr. If it's assigned to a variable describing the number of bananas
  // on a banana plant, you might call it bananaPtr. As I say, using 'ptr' isn't wrong, but good
  // code design allows you to be consistent whether your program is 20 lines long or 20000 :)
  // Also, I generally like to declare the pointers first, and then use them only once they've
  // been declared. There's certainly nothing stopping you from writing
  // int *numbers1Ptr = new int[10];
  // all on one line, but I think when it comes to pointers, declaring them and initialising
  // them in seperate statments looks cleaner. There will be instances where it *does* make
  // sense to declare and initialise on the same line however, so this is a guideline, not a rule
  
  int length = 10;
  int *numbersPtr1;
  int *numbersPtr2;

  //  cout << "Enter elements of first array:" << endl;
  numbersPtr1 = readNumbers();
  //  cout << "Enter elements of second array:" << endl;  
  numbersPtr2 = readNumbers();  

  // I haven't deleted the following line, but I commented it out so it doesn't compile.
  // Because you're using the equalsArray() function in the conditional part of your if statement
  // below, that is perfectly adequate when it comes to calling the function, and you won't need to call
  // it before that point. All you're really doing if you call the function *before* your if statment
  // (as in the commented-out line below) is running code that either returns true or false, but
  // doesn't actually do anything after that point. So it's not going to cause errors, but it also
  // will basically be ignored by the program. Calling equalsArray outside of the if statement
  // basically tells your program 'OK, this thing I've called is either true or false, but you can
  // ignore that and just continue with the rest of the program'. I may not have properly explained
  // this point, so let me know if it doesn't make sense and I'll have another go.
  
  //  equalsArray(numbersPtr1, numbersPtr2, length);

  // You'll notice I removed the '== true' part of what you wrote in the conditional part of the
  // following if statement. Because of the way that selection statements like 'if' and 'switch' work,
  // all of the stuff you put between the parentheses will evaluate to zero or non-zero - that is,
  // true or false, especially in the case of a boolean expression like equalsArray. So when
  // you call equalsArray, it will return true of false, which is all that the conditional cares about.
  // If you add the '== true' part, it won't create any errors, but it's also redundant. Your
  // code will basically reduce to 'true == true', but because 'true' by itself is all the conditional
  // part of the if statement needs, it will ignore the '== true' part (conversely, if the function
  // returns 'false', then you'll have 'false == true', which will be read as 'false', which is the same
  // as 'false'. So again, including the '== true' isn't necessary)
  // I've also added a couple of spaces in the argument list of the function. Again, not necessary, but
  // it makes your code a little easieer to read. Don't be afraid to use white space if it makes things
  // clearer - you can use too little white space, just as you can use too much. The compiler
  // ignores it after all, so use as much or as little as is appropriate to make your code clean
  // and elegant. I've done this a few more times in the rest of this file and also in the
  // function-3-1.cpp file, but I won't mention it again every time I do it :)
  // I have also removed that final if statement below, as it wasn't necessary. If you follow
  // the logic of your code, you'll see that once you enter the 'else' part of the if-else statement,
  // you only have one possible route - that is, the value is false. If there were another potential
  // outcome, it would make sense to use else if(), but in this instance you can get away without the
  // last if. This can be a tricky idea to begin with, so again, if I did a poor job of explaining
  // what I'm talking about, let me know.
  // Finally, I just changed what is printed, because I think the question asks you to print 'True'
  // or 'False' depending on the outcome of the program. I don't know if you would get errors if
  // you printed anything other than 'True' or 'False', you are more than welcome to play around with
  // it :)
  
  if (equalsArray(numbersPtr1, numbersPtr2, length)) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
    
  delete[] numbersPtr1;
  delete[] numbersPtr2;
}
