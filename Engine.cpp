#include "Engine.h"
using namespace std;


Engine::Engine(){}

        string Engine::getType()
        { return type; }

        void Engine::setType(string val)
        { type = val; }

        string Engine::getBrand()
        { return brand; }

        void Engine::setBrand(string val)
        { brand = val; }

        bool Engine::getDiesel()
        {return isDiesel; }

        void Engine::setDiesel(bool val)
        {isDiesel = val; }
