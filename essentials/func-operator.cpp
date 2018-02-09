#include <cstdio>
using namespace std;

class A {
    int a;
public:
    A ( const int &a ) : a(a) {}
    const int & value() const { return a; }
};

int operator + (const A & lhs, const A & rhs ) {
    puts("operator + for class A");
    return lhs.value() + rhs.value();
}
