#include <cstdio>
using namespace std;

// this file contains both the class interface and the class implementation
// normally you would split this to at least two different files.
// for example classA.h and classA.cpp

// class interface
class classA {
    int ia;
public:
    void setValue( const int a);
    int getvalue() const;
    int getvalue();
};

// class implementation
void classA::setValue(const int a) {
    ia = a;
}

int classA::getvalue() const {
    return ia;
}

int classA::getvalue() {
    return ia;
}
