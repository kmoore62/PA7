#include "Compact.h"
#include <iostream>
#include <cstring>

using namespace std;

Compact::Compact(){
//declare an array of size capacity
  parray= new int[capcity];
  tos=-1;
}

Compact::~Compact(){
//delete the dynamic memory
  delete []parray;
}

bool Compact::empty()const{
  return tos==-1;
}

bool Compact::full() const{
  return tos == capacity-1;
}

void Compact::push(string name){
  //throw exception if it is full
  ++tos;
  parray[tos]= name;
}

string Compact::top() const{
  return parray[tos];
}

void Compact::pop(){
  --tos;
}


