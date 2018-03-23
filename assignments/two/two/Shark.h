//
// Created by hans on 22/03/2018.
//

#ifndef TWO_SHARK_H
#define TWO_SHARK_H


#include "Chondrichthyes.h"

class Shark : Chondrichthyes {
public:
    Shark();
    ~Shark();
    void make_sound() override;
};


#endif //TWO_SHARK_H
