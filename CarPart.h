#ifndef CARPART_H
#define CARPART_H
#include <iostream>
using namespace std;


class CarPart
{
    public:
        CarPart();
        CarPart(string);//Overloaded constructor


        float getPrice();
        void setPrice(float);
        string getName();
        void setName(string);
        float getWeight();
        void setWeight(float);
        int getPartsCount();
        void displayDetails();
        void displayDetails(string name);



    private://Data hiding
        float price;
        string name;
        float weight;
        static int partsCount;//Static variable
        void displaydetails;

};

#endif
