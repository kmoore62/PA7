#pragma once

class Node(){
private:
  int data;
  node* link;
public:
  node(int);
  friend class Truck;
};
