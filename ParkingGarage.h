#pragma once

class ParkingGarage{
private:
  
int* compactArray;
int* truckArray;
int size;
int compacttos;
int trucktos;
  
  //any private members we might need
  //I think we might need a counter of how many trucks and compacts we have
  //I think we need a counter that keeps track of how many total cars we have
  //I think we need variable that keeps track of the capacity we have set
  
public:
  ParkingGarage();
  
  ParkingGarage(int);//the int here is the capacity defined in the main.cpp
  
  ~ParkingGarage(); //I think this should be a virtual function because the array of compact
  //and the singly linked list of truck will have to be deleted differently
  
  void push(Vehicle*); //park a car which is passed by Vehicle*
  
  void pop(CarType); //unpark a car
  
  void isVacant(CarType);//check if there is a parking spot and display VACANT or FULL

  void checkStatus(); //display the entire map of each lane
  
  //I think we will need a copy constructor and or an assignment operator overloading
  //because we will be assigning child classes to base class later on



};
