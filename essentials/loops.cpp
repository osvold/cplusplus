#include <iostream>
using namespace std;

void loops() {
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
}
