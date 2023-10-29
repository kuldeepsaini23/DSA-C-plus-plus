//! Declarations
#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>


class MyString{
private:
  char *data; //pointer to char array data
  int length; // size of my string

public:
  //* default Constructor
  MyString();

  //* Parameterized Constructor
  MyString(const char *str);

  //* Copy ctor
  MyString(const MyString &other);

  ~MyString();

  int size() const; //cannot change length inside it

  bool empty() const;

  const char *c_str() const;

  char operator[](int index);

  //* Find Substring
  int find(const MyString &str) const;  

  //* Overload isnerting operator << for easy output
  friend std::ostream &operator<<(std::ostream &os, const MyString &str);

};

#endif //MYSTRING_H