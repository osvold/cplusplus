#include <iostream>
#include <vector>
#include "Property.h"
using namespace std;

int main() {

    Property aProperty1 = Property(100, 200, 300, 400);
    Property aProperty2 = Property(200, 300, 400, 500);
    vector<Property> properties;
    properties.push_back(aProperty1);
    properties.push_back(aProperty2);
    vector<Property> :: iterator i;

    for(i = properties.begin(); i != properties.end(); ++i) {
        cout << "County: "
             << (*i).GetCounty()
             << ", Estate: "
             << (*i).GetEstate()
             << ", Lot: "
             << (*i).GetLot()
             << ", Leased: "
             << (*i).GetLeased()
             << endl;
    }

    return 0;
}