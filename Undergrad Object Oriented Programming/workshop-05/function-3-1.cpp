#include <iostream>
using namespace std;

// You'll notice I did the thing where I moved the left brace in readNumbers() to a new line again

int *readNumbers()
{
  // I've renamed your pointer here in a similar way to how I renamed the pointers earlier.
  
  int *arrayPtr = new int[10];

  // Another thing I do in terms of utilising white space is to leave a blank line on either side of
  // the header of for looops. I also do this with while loops too, and with if statements I leave a
  // line blank *before* the header, but continue with the code immediately after. I think using
  // blank lines in this way makes your code a lot clearer, but I don't think there is one
  // right way to do it. I think everyone needs to play around with it a little bit and see what works
  // for them.
  
  for (int i = 0; i < 10; i++) {

    cin >> *(arrayPtr + i);
  }
  
  return arrayPtr;
}

// The following function is where I made the biggest changes, which I explained in the attached
// message. I wont' go through it again, but let me know if there is anything here that doesn't
// make sense. I may have done something stupid (again!), so it's best you let me know if
// stuff doesn't seem logical, and I will have another look.

bool equalsArray (int *numbers1, int *numbers2, int length)
{
  if (length > 0){
    
    for (int i = 0; i < length; i++) {
      
      if (numbers1[i] != numbers2[i]) {
	return false;
      }
    }
    return true;
  }
  else {
    return false;
  }
}
