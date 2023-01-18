#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>

class meerkat
{
 public:
  meerkat();
  void setName( const std::string );
  string getName() const;
  void setAge( const int );
  int getAge() const;
 private:
  std::string name;
  int age;
};

#endif
