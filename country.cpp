#include "country.h"
#include <iostream>
using namespace std;
Country::Country(): Geographyobject()
{
    this->capital="Unknown";
}
Country::Country(string const&nameobject, double const&x,double const&y, string const& capital):
    Geographyobject(nameobject,x,y)
{
    this->capital=capital;
}
Country::Country(Country const &country):Geographyobject(country)
{
    this->capital=country.capital;
}
const string& Country::getCapital() const
{
    return capital;
}
void Country::setCapital(string const& capital)
{
    this->capital=capital;
}
void Country::print()
{
    cout<<"nameobject: "<<this->nameobject<<endl;
    cout<<"x: "<<this->x<<endl;
    cout<<"y: "<<this->y<<endl;
    cout<<"capital: "<<this->capital<<endl;
}
Country& Country::operator = (Country const& country)
{
    this->nameobject=country.nameobject;
    this->x=country.x;
    this->y=country.y;
    this->capital=country.capital;
    return *this;
}


