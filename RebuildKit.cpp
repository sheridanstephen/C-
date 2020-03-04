#include "RebuildKit.h"
#include <iostream>
using namespace std;

void RebuildKit::addCarPart(CarPart a) {
	if (carParts.size() <= maximumParts) {
    	carParts.push_back(a);
    } else {
    	cout<<"The rebuild kit has the maximum number of parts"<<endl;
    }


}

void RebuildKit::displayDetails() {
	cout << "The " <<CarPart::getPartsCount() <<" The number of parts in the kit are: " <<endl;
	for (int i=0; i<carParts.size(); i++) {
		carParts[i].displayDetails();
	}
  	std::cout << '\n';
}
