#include "city.h"
#include <iostream>
using namespace std;
City::City():Country()
{
    this->iscountry=false;
    this->countresidents=0;
}
City::City(string const&nameobject, double const&x,double const&y,
     string const& capital, unsigned int const countresidents,
     bool const iscountry):
         Country(nameobject,x,y,capital)
{
    this->iscountry=iscountry;
    this->countresidents=countresidents;
}
City::City(City const& city):Country(city)
{
    this->iscountry=city.iscountry;
    this->countresidents=city.countresidents;
}
    const  bool City::getIsCountry() const
{
    return iscountry;
}

    const unsigned int City::getCountResidents() const
{
    return countresidents;
}
void  City::setIsCountry(bool const iscountry)
{
    this->iscountry=iscountry;
}
void  City::setCountResidents(unsigned int const countresidents)
{
    this->countresidents=countresidents;
}
void City::print()const
{
    Country::print();
    cout<<"iscountry: "<<this->iscountry<<endl;
    cout<<"countresidents: "<<this->countresidents<<endl;
}
City & City::operator  = (City const& city)
{
    Country::operator = (city);
    this->iscountry=iscountry;
    this->countresidents=countresidents;
    return *this;
}





