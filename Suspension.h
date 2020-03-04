#ifndef SUSPENSION_H
#define SUSPENSION_H

#include "CarPart.h"


class Suspension : public CarPart
{
    public:
        Suspension();


        string getPType();
        void setPType(string val);
        bool isFront();
        void setFront(bool val);
        string getBrand();
        void setBrand(string);


    private:
        string Ptype;
        bool front;
        string brand;
};

#endif // SUSPENSION_H
