#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "sizes: " << sizeof(int) << " " << sizeof(double) << " " << sizeof(char) << endl;

    int x = 2100000009;
    float f = x;
    cout << x << "" << f << endl;
    cout << setprecision(15) << x << "" << f << "\n";

    return 0;
}