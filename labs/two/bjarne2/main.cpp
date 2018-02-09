#include <iostream>
using namespace std;

int main() {
    cout << "Oppgi et og et positivt heltall, så skal jeg sortere stigende for de for deg." << endl;

    int var1;
    int var2;
    int var3;

    cout << "Tall 1: " << endl;
    cin >> var1;
    cout << "Tall 2: " << endl;
    cin >> var2;
    cout << "Tall 3: " << endl;
    cin >> var3;

    int tall [3] = { var1, var2, var3 };

    int temp;

    // insertion sort
    int i = 1;
    int j;
    while(i < 3) {
        j = i;

        while(j > 0 && tall[j-1] > tall[j]) {
            temp = tall[j-1];
            tall[j-1] = tall[j];
            tall[j] = temp;
            j--;
        }

        i++;
    }

    cout << "Tallene du ga: " << tall[0] << ", " << tall[1] << ", " << tall[2] << endl;

    return 0;
}