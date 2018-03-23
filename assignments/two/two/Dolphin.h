//
// Created by hans on 22/03/2018.
//

#ifndef TWO_DOLPHIN_H
#define TWO_DOLPHIN_H


#include "Animal.h"
#include "Mammal.h"

class Dolphin : Mammal {
public:
    Dolphin();
    ~Dolphin();
    void make_sound() override;
};


#endif //TWO_DOLPHIN_H
