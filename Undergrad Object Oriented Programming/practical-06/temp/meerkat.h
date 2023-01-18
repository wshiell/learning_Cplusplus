//  ************************************************
//  *
//  *    meerkat.h
//  *    Author: Wade Shiell
//  *
//  ************************************************

#ifndef MEERKAT_H
#define MEERKAT_H

class meerkat
{
 public:

  meerkat();
  meerkat(std::string meerName, int meerAge);
  void setName(std::string meerName);
  std::string getName();
  void setAge(int meerAge);
  int getAge();

 private:

  std::string name;
  int age;
};

#endif
