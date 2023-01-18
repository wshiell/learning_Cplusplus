#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

int main()
{
  cout << "Good "<< flush;
  usleep(200000);
  cout << "morning. " << flush;
  usleep(200000);
  cout << "How " << flush;
  usleep(200000);
  cout << "are " << flush;
  usleep(200000);
  cout << "you?" << flush;
  cin.ignore();
}
