#pragma once
#include "vehicle.h"
#include <string>

class Compact: protected vehicle{
protected:
  int* parray;
  //int size; //capacity which is defined in the vehicle
  int tos; //this is the top of stack
public:
  Compact();
  Compact(int);
  ~Compact();
  bool empty() const;
  bool full() const;
  void push(string);
  //string top() const;
  void pop();
};
