#pragma once
#include <string>
using namespace std;
class Geographyobject
{
protected:
    string nameobject;
    double x;
    double y;
public:
     Geographyobject();
     Geographyobject(string const&nameobject, double const&x,double const&y);
     Geographyobject(Geographyobject const &geographyobject);
    const string& getNameObject() const;
    const double& getX() const;
    const double& getY() const;
    void setNameObject(string const& nameobject);
    void setX(double const& x);
    void setY(double const& y);
    virtual void print()=0;
};
