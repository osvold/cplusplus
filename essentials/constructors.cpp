#include <cstdio>
#include <string>
using namespace std;

const string unk = "unknown";
const string clone_prefix = "clone-";

// The Rule of Three's:
// If you are overloading any of the implicit
// copy constructor, destructor or copy operator,
// then it is a good idea to overload all three of them.
// because you might run into problems if you don't.

// -- interface --
class Animal {
    string _type = "";
    string _name = "";
    string _sound = "";
public:
    Animal(); // default constructor
    Animal(const string & type, const string & name, const & sound);

    Animal(const Animal &); // Copy constructor
    Animal & operator = (const Animal &); // copy operator
    ~Animal(); // destructor
    void print() const;
};

// -- implementation --
Animal::Animal() : _type(unk), _name(unk), _sound(unk) {
    puts("default constructor!");
}

Animal::Animal(const string & type, const string & name, const string & sound) :
    _type(type), _name(name), _sound(sound) {
    puts("constructor with arguments!");
}

Animal::Animal(const Animal & a) {
    puts("copy constructor!");
    _name = clone_prefix + a._name;
    _type = a._type;
    _sound = a._sound;
}

Animal::~Animal() {
    printf("destructor: %s the %s\n", _name.c_str(), _type.c_str());
}

Animal & Animal::operator =(const Animal & o) {
    puts("Assignment operator!");
    if(this != 0) {
        _name = clone_prefix + o._name;
        _type = o._type;
        _sound = o._sound;
    }
    return *this;
}


