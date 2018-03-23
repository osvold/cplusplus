//
// Created by hans on 22/03/2018.
//

#ifndef TWO_MAMMAL_H
#define TWO_MAMMAL_H


#include "Animal.h"

class Mammal : Animal {
public:
    Mammal();
    ~Mammal();
    virtual void make_sound() override;
};


#endif //TWO_MAMMAL_H
