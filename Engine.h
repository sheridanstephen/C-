#ifndef ENGINE_H
#define ENGINE_H

#include "CarPart.h"


class Engine : public CarPart
{
    public:
        Engine();


        string getType();
        void setType(string);
        string getBrand();
        void setBrand(string);
        bool getDiesel();
        void setDiesel(bool);


    private:
        string type;
        string brand;
        bool isDiesel;
};

#endif // ENGINE_H
