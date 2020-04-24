#pragma once
#include "geography_object.h"
#include "country.h"
#include <string>
using namespace std;
class City:public Country
{
protected:
    bool iscountry;
    unsigned int countresidents;
public:
    City();
    City(string const&nameobject, double const&x,double const&y,
         string const& capital, unsigned int const countresidents,
         bool const iscountry);
    City(City const& city);
    const  bool getIsCountry() const;
    const unsigned int getCountResidents() const;
    void  setIsCountry(bool const iscountry);
    void  setCountResidents(unsigned int const countresidents);
    void print()const;
     City& operator = (City const& city);
};


