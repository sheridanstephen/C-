#include "CarPart.h"

#include <iostream>
#include <string>

using namespace std;

int CarPart::partsCount = 0;//Static integer initialised

CarPart::CarPart() {partsCount++;}

CarPart::CarPart(string n) //Overloaded constructor
{
	setName(n);
	partsCount++;
}

string CarPart::getName()  {
	return name;
}

void CarPart::setName(string n) {
	name = n;
}

float CarPart::getPrice()  {
	return price;
}

void CarPart::setPrice(float n) {
	weight = n;
}

float CarPart::getWeight()  {
	return weight;
}

void CarPart::setWeight(float n) {
	weight = n;
}
int Carpart::getPartsCount()
{return partscount; }

void CarPart::displayDetails() {
	cout<<"Car Part : "<<getName() <<" price:  "<<getPrice()<<" Weight:  "<<getWeight()<<endl;
}
