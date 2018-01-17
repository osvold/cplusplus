#include "sayHello.h"
#include "giveNumber.h"
#include "printLargestNumber.h"

int main() {
    sayHello();

    int first = giveNumber();
    int second = giveNumber();
    int third = giveNumber();

    if(first > second && first > third) printLargestNumber(first);
    else if(second > first && second > third) printLargestNumber(second);
    else printLargestNumber(third);

    return 0;
}