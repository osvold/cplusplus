#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myFile;
    myFile.open ("example.txt", ios::in);
    myFile << "Lorem Ipsum...\n";
    myFile.close();
    return 0;
}