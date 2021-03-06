//
// Created by Sun Haoxian on 2/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_BITFLIPPROB_H
#define CMAKE_CLION_CONAN_TEMPLATE_BITFLIPPROB_H

#include "Mutator.h"
#include <random>

class BitFlipProb: public Mutator{

public:
    BitFlipProb(double p);
    Individual mutate(Individual individual, int k) override;

private:
double prob;
int randnum;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_BITFLIPPROB_H
