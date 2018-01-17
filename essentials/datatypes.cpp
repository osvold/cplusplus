#include <iostream>
using namespace std;

void dataTypes() {
    int x = 10;

    // referanse til x
    int &y = x;

    // pointer til x-sin verdi i minne
    int *ip = &x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    x = 42;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    y = 73;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    int z = 149;
    ip = &z;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);
    printf("The value of z is %d\n", z);

     y = z;
     printf("The value of x is %d\n", x);
     printf("The value of y is %d\n", y);
     printf("The value of *ip is %d\n", *ip);
     printf("The value of z is %d\n", z);
}
