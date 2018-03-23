#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T> struct S {
    T value;
    S(T t) : value(t) {}
    T& get();
    void set(T v);
};

template<typename T> T &S<T>::get() {
    return value;
}

template<typename T>
void S<T>::set(T v) {
    value = v;
}

void print(int i) {
    cout << i << ' ';
}

int main() {
    S<int> i = 1;
    S<char> c = 'A';
    S<double> d = 1.0;
    S<string> s = string("Hello");
    vector<int> vector1 = {1,2,3,4,5,6,7};
    S<vector<int>> v = vector1;

    cout << "i=" << i.get() << endl;
    cout << "c=" << c.get() << endl;
    cout << "d=" << d.get() << endl;
    cout << "s=" << s.get() << endl;
    for_each(v.get().begin(), v.get().end(), print);
    cout << endl << endl;

    i.set(123);
    c.set('L');
    d.set(3.14);
    s.set("Goodbye");
    vector<int> vector2 = {10, 11, 12, 13, 14, 15, 17, 18, 19};
    v.set(vector2);

    cout << "i=" << i.get() << endl;
    cout << "c=" << c.get() << endl;
    cout << "d=" << d.get() << endl;
    cout << "s=" << s.get() << endl;
    for_each(v.get().begin(), v.get().end(), print);

    return 0;
}