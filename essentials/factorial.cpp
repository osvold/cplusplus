#include <cstdio>
#include "factorial.h"
using namespace std;

unsigned long int factorial ( unsigned long int n ) {
    if( n < 2 ) return 1;
    return factorial( n - 1) * n;
}
