#include "shouldSayHello.h"
#include "sayHello.h"

int main() {
    char c = shouldSayHello();
    if(c == 'y' || c == 'Y') sayHello();
    return 0;
}