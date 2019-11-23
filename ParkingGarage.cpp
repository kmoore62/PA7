#include "ParkingGarage.h"
#include "Truck.h"
#include "Compact.h"
#include <iostream>

using namespace std;

ParkingGarage::ParkingGarage(){

}


ParkingGarage::ParkingGarage(int capacity) : size(s), tos(-1){
	compactArray = new int[capacity];
	truckArray = new int[capacity];
}


ParkingGarage::~ParkingGarage(){
//delete dynamic memory
}

void ParkingGarage::push(Vehicle* ptr){
	if(ptr == Compact){
	++tos;
	compactArray[tos] = ptr;
	}
	
	if(ptr == Truck){
	++tos;
	truckArray[tos] = ptr;
	}
}


void ParkingGarage::pop(CarType x){
	if(x == COMPACT){
		compacttos--;
	}

	if(x == TRUCK){
		trucktos--;
	}
}

void ParkingGarage::isVacant(CarType x){
	if(x == COMPACT){
		if(compacttos == 10){
			return "Full";
		} else {
			return "Vacant";
		}
	}

	if(x == TRUCK){
		if(trucktos == 10){
			return "Full";
		} else {
			return "Vacant";
		}
	}
}

void ParkingGarage:: checkStatus(){
  while (true){
  
   cout << "------------------------------------------------" << endl;
	cout << "|     Lane 1    |    Lane 2     |    Lane 3    |" << endl;
	cout << "|---------------|---------------|--------------|" << endl;
  cout << "|
  }
//should this be void?
}
