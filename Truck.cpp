#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(): ptop(nullptr){
//initialize a singly linked list of size capacity
}

Truck::~Truck(){
//delete dynamic memory
}

void Truck::push(string name){

}

void Truck:: pop(){
  if(ptop->link==nullptr){
    //this is for only one node
    delete ptop;
    ptop=nullptr;
  }
  else{
    node* discard= ptop;
    ptop= ptop->link;
    delete discard;
  }
}

bool Truck::empty() const{
  return ptop==nullptr;
}

bool Truck::full() const{
  return false;
}

String Truck::top() const{
  return ptop->name;
}
