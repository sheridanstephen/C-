#include "Suspension.h"
using namespace std;

Suspension::Suspension()
{}

string Suspension::getPType()
 { return type; }

void Suspension::setPType(string val)
{ type = val; }

bool Suspension::isFront()
{ return front; }

void Suspension::setFront(bool val)
{ front = val; }

string Suspension::getBrand()
{ return brand; }

void Suspension::setBrand(string val)
{ brand = val; }
