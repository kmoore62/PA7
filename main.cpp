#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "ParkingGarage.h"
#include "Vehicle.h"
#include "compact.h"
#include "truck.h"

using namespace std;

int main(){

//this is the capacity. it is the number of cars that can fit in each row
const int CAPACITY= 10;

//this is a count of how many trucks and cars exist
int truckCount;
int compactCount;

//declare time seed

//because vehicle is an abstract class, an object of it cannot be declared. So, and array of size capacity times 2
// of pointers should be created in order to store the child class objects we will be creating. Probalby name
//it something like park
//DECLARE THAT HERE


//declare child objects so that they can be used later
compact ccar;
truck tcar;

//accept the input from the text file

//based on the given input, assign it to a truck or compact

//close the text file


//create a random number generator that generates a random number from 0 to 20
//this number will decide how many cars will be removed. name this variable something like carsRemoved

//crate a for loop that will  generate a random number carsRemoved number of times
for(int i=0; i<carsRemoved; i++){

  //generate random number 0 or 1
  if(randomNumber==0 && compactCount!=0){
    //pop a compact car
  }
  else if(randomNumber==1 && truckCount!=0){
    //pop a truck
  }
}//end of for loop

//now the parking lot needs to be displayed
cout<<"Row 1"<<endl;
//code to display compact cars
cout<<"Row 2"<<endl;
// It may look something like the following
//--------------------------------------------------------------------
//| truck | truck | truck | truck | vacant | vacant |



return 0; //end of main
}
