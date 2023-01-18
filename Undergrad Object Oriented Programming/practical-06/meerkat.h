#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>

class meerkat
{
 public:
  static int meer_ID;
  static int get_MeerkatID();
  
  meerkat();
  ~meerkat();
  
  void setName( const std::string );
  std::string getName() const;
  
  void setAge( const int );
  int getAge() const;
  
 private:
  std::string name;
  int age;
};

#endif
