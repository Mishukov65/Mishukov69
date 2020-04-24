#include "wildobject.h"
#include <iostream>
using namespace std;
Wildobject::Wildobject():Geographyobject(){}
Wildobject::Wildobject(string const&nameobject, double const&x,double const&y):
    Geographyobject(nameobject,x,y){}
Wildobject::Wildobject(Wildobject const& wildobject):Geographyobject(wildobject){}
void Wildobject::print()const
{
    cout<<"nameobject: "<<this->nameobject<<endl;
    cout<<"x: "<<this->x<<endl;
    cout<<"y: "<<this->y<<endl;
}

Wildobject& Wildobject::operator = (Wildobject const& wildobject)
{
    this->nameobject=wildobject.nameobject;
    this->x=wildobject.x;
    this->y=wildobject.y;
    return *this;
}
