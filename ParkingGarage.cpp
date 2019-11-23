#include "ParkingGarage.h"
#include "Truck.h"
#include "Compact.h"
#include <iostream>



using namespace std;

ParkingGarage::ParkingGarage() {

}


ParkingGarage::ParkingGarage(int capacity) : size(capacity), compacttos(-1), trucktos(-1) {
	compactArray = new int[capacity];
	truckArray = new int[capacity];
}


ParkingGarage::~ParkingGarage() {
	//delete dynamic memory
}

void ParkingGarage::push(vehicle* ptr) {
	if (ptr == Compact) {
		++compacttos;
		compactArray[compacttos] = ptr;
	}

	if (ptr == Truck) {
		++trucktos;
		truckArray[trucktos] = ptr;
	}
}


void ParkingGarage::pop(CarType x) {
	if (x == COMPACT) {
		compacttos--;
	}

	if (x == TRUCK) {
		trucktos--;
	}
}

void ParkingGarage::isVacant(CarType x) {
	if (x == COMPACT) {
		//run Compact empty and full exceptions
	}

	if (x == TRUCK) {
		//run Truck empty and full exceptions
	}
}

void ParkingGarage::checkStatus() {
	while (true) {

		cout << "------------------------------------------------" << endl;
		cout << "|     Lane 1    |    Lane 2     |    Lane 3    |" << endl;
		cout << "|---------------|---------------|--------------|" << endl;
		cout << "|
	}
	//should this be void?
}
