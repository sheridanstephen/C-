#include "CarType.h"
#include <string>
CarType::CarType()
{
}
CarType::CarType(string n)
{
   setFuel(n);
}
void CarType::setFuel(string n){
    fuelType = n;
}
string CarType::getFuel(){
return fuelType;
}

void CarType::setYear(int n){
    this->yearManufactured = n;
}
int CarType::getYear(){
return yearManufactured;
}
bool CarType::getCommercial(){
    return commercial;
}
void CarType::setCommercial(bool n){
commercial = n;
}
