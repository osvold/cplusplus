#include <iostream>
#include <list>

int main() {

    std :: list<int> list1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto it = std :: find(list1.begin(), list1.end(), 3);

    if(it != list1.end()) {
        std :: cout << "Element (3) is in list at position(" << (*it) << ")" << std :: endl;
    } else {
        std :: cout << "Element (3) is not in list" << std :: endl;
    }

    std :: list<int> list2 = list1;

    return 0;
}