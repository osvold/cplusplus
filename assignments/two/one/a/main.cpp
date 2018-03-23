#include <iostream>
#include <vector>
using namespace std;

struct property {
    int county;
    int estate;
    int lot;
    int leased;
};

int main() {
    property aProperty1 {};
    property aProperty2 {};

    aProperty1.county = 712;
    aProperty1.estate = 4090;
    aProperty1.leased = 73;
    aProperty1.lot = 15;

    aProperty2.county = 1424;
    aProperty2.estate = 8180;
    aProperty2.leased = 146;
    aProperty2.lot = 30;

    vector<property> vector1;
    vector1.push_back(aProperty1);
    vector1.push_back(aProperty2);

    vector<property> :: iterator i;

    for(i = vector1.begin(); i != vector1.end(); ++i) {
        cout << "County: " << (*i).county << ", Estate: " << (*i).estate << ", Lot: " << (*i).lot << ", Leased: " << (*i).leased << endl;
    }

    return 0;
}