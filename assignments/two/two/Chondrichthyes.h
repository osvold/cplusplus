//
// Created by hans on 22/03/2018.
//

#ifndef TWO_CHONDRICHTHYES_H
#define TWO_CHONDRICHTHYES_H

#include "Animal.h"

class Chondrichthyes : Animal {
public:
    Chondrichthyes();
    ~Chondrichthyes();
    virtual void make_sound() = 0;
};


#endif //TWO_CHONDRICHTHYES_H
