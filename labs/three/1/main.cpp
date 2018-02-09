#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double mySquareRoot(double x)
{
    if(x < 0) throw runtime_error("oops bad input");
    return sqrt(x);
}

int main() {

    try {
        int a = 4;
        cout << mySquareRoot(a) << endl;
        double b = -21;
        cout << mySquareRoot(b) << endl;
    } catch(runtime_error& error) {
        cout << error.what() << endl;
    }

    cout << "Give some temps: " << endl;

    vector<double> temps;
    for(double temp; cin >> temp;)
        temps.push_back(temp);

    double sum = 0;
    for(double x:temps) sum += x;

    cout << "Average is: " << sum/temps.size() << '\n';
    cout << "Median temp is: " << temps[temps.size() / 2] << '\n';

    cout << "Sorted: " << '\n';
    sort(temps.begin(), temps.end());
    for(double x: temps)
        cout << x << endl;

    cout << "Write some words.." << '\n';

    vector<string> words;
    for(string temp; cin>>temp;) // end with ctrl + z (win) or ctrl +d (unix)
        words.push_back(temp);

    sort(words.begin(), words.end());

    for(string s: words)
        cout << s << '\n';



    return 0;
}