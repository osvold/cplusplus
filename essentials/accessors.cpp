#include <cstdio>
#include <string>
using namespace std;

class B {
    int ia;
    string sb;
    int ic;
public:
    B ( const int a, const string & b, const int ic) : ia(a), sb(b), ic(3) {}
    void seta ( const int a ) { ia = a; }
    void setb ( const string & b ) { sb = b; }
    void setc ( const int c ) { ic = c; }
    int geta () const { return ia; }
    const string & getb() const { return sb; }
    const char * getb_cstr () const { return sb.c_str(); }
    int getc () const { return ic; }
};
