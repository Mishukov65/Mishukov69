#pragma once
#include "geography_object.h"
#include <string>
using namespace std;
class Country:public Geographyobject
{
protected:
    string capital;
public:
    Country();
    Country(string const&nameobject, double const&x,double const&y, string const& capital);
    Country(Country const &country);
    const string& getCapital() const;
    void setCapital(string const& capital);
    void print()const;
    Country& operator = (Country const& country);
};
