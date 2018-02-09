#include <cstdio>
using namespace std;

const size_t _maxsize = 1024;

class strsize {
    size_t size = 0;
public:
    void strsize(const int);             // constructor: size from int
    void strsize(const char *);          // constructor: size from c-string
    size_t size() const;
};

void strsize::strsize(const int n) {
    puts("constructor: size from int");
    _size = (n <= _maxsize) ? n : 0;
}

void strsize::strsize(const char * s) {
    puts("constructor: size from c-string");
    for(size_t i = 0; i < _maxsize; i++) {
        if(s[i] == 0) {
            _size = i;
            return;
        }
    }
    _size = 0;
}

size_t strsize::size() {
    return _size;
}
