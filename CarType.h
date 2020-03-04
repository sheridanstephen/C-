#ifndef CARTYPE_H
#define CARTYPE_H
#include <iostream>
#include <string>

using namespace std;

//#include <CarPart.h>


class CarType

{
    public:
        CarType();
        CarType(string fuelType);
        int getYear();
        void setYear(int);
        string getFuel();
        void setFuel(string);
        bool getCommercial();
        void setCommercial(bool);




    private:
        int yearManufactured;
        string fuelType;
        bool commercial;

};

#endif CARTYPE_H
