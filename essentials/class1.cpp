#include <cstdio>
using namespace std;

// a very simple class
// normaly we would split this into a interface file and a implementation file.
class Class1
{
private:
    int i;
public:
    int j = 47;
    void setValue( const int value ) { i = value; }
    int getValue() const { return i; }
};
