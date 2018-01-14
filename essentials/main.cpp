//#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
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

    // loops

    int a[] = { 1, 2, 3, 4, 5 };
    int i = 0;
    while(i < 5) {
        printf("Element %d is %d\n", i, a[i]);
        i++;
    }

    for(int i = 0; i < 5; i++) {
        printf("Element %d is %d\n", i, a[i]);
    }

    char s[] = "string";
    for(char * cp = s; *cp; ++cp) {
        printf("Element is %c\n", *cp);
    }

    // range-based for loop
    for(int i : a) {
        printf("Element is %i\n", i);
    }

    for(char c : s) {
        if(c == 0) break;
        printf("Element is %c\n", c);
    }

    cout << "Hello, World!" << endl;

    //    QCoreApplication a(argc, argv);
    //    return a.exec();
   return 0;
}
