#include "geography_object.h"
using namespace std;
Geographyobject::Geographyobject()
{
    this->nameobject="Unknown";
    this->x=0.0;
    this->y=0.0;
}
Geographyobject::Geographyobject(string const&nameobject, double const&x,double const&y)
{
    this->nameobject=nameobject;
    this->x=x;
    this->y=y;
}
Geographyobject::Geographyobject(Geographyobject const &geographyobject)
{
    this->nameobject=geographyobject.nameobject;
    this->x=geographyobject.x;
    this->y=geographyobject.y;
}
const string& Geographyobject::getNameObject() const
{
    return nameobject;
}
const double& Geographyobject::getX() const
{
    return x;
}
const double& Geographyobject::getY() const
{
    return y;
}
void Geographyobject::setNameObject(string const& nameobject)
{
     this->nameobject=nameobject;
}
void Geographyobject::setX(double const& x)
{
    this->x=x;
}
void Geographyobject::setY(double const& y)
{
    this->y=y;
}

