#include <iostream>
#include "geography_object.h"
#include "country.h"
#include "city.h"
#include "wildobject.h"
using namespace std;

int main()
{
   Country spain("Spain",103.3,57.5,"Madrid");
   Country england;
   england.print();
   england=spain;
   england.print();
    City london;
    london.setIsCountry(true);
    london.setCountResidents(12434231);
    london.setCapital("london");
    london.setNameObject("city");
    london.setX(245.9);
    london.setY(-15.6);
    cout<<endl<<"\n\n";
    cout<<endl<<london.getIsCountry();
    cout<<endl<<london.getNameObject();
    cout<<endl<<london.getCountResidents();
    cout<<endl<<london.getCapital();
    cout<<endl<<london.getX();
    cout<<endl<<london.getY()<<endl;
    
    Wildobject forest("Ggggg",76.8,36.6);
    forest.print();
    const City c("", 0, 0, "", 0, 0);
    c.print();
    return 0;
}
