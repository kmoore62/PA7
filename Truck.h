#include "vehicle.h"

class Truck: protected vehicle{
protected:
  node* ptop;
public:
  Truck();
  ~Truck();
  void push(string);
  void pop();
  string top() const;
  bool empty() const;
  bool full() const;
};
