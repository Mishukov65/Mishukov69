#pragma once
#include "geography_object.h"
#include <string>
using namespace std;
class Wildobject:public Geographyobject
{
public:
    Wildobject();
    Wildobject(string const&nameobject, double const&x,double const&y);
    Wildobject(Wildobject const& wildobject);
    void print()const;
    Wildobject& operator = (Wildobject const & wildobject);
};
