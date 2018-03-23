#include <iostream>
#include <vector>

using namespace std;

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};

void f(vector<int> v);
void print(int a);

int main() {
    f(gv);
    vector<int> vv = {
            1,
            2*1,
            3*2*1,
            4*3*2*1,
            5*4*3*2*1,
            6*5*4*3*2*1,
            7*6*5*4*3*2*1,
            8*7*6*5*4*3*2*1,
            9*8*7*6*5*4*3*2*1,
            10*9*8*7*6*5*4*3*2*1
    };

    f(vv);

    return 0;
}

void print(int a) {
    cout << ' ' << a;
}

void f(vector<int> gv) {
    vector<int> lv = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(auto it = gv.begin(); it != gv.end(); ++it) {
        lv.push_back(*it);
    }

    for_each(lv.begin(), lv.end(), print);
    cout << endl;

    vector<int> lv2 = lv;
    for_each(lv2.begin(), lv2.end(), print);
    cout << endl;
}


