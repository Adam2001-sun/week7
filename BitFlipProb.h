//
// Created by Sun Haoxian on 2/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_BITFLIPPROB_H
#define CMAKE_CLION_CONAN_TEMPLATE_BITFLIPPROB_H

#include "Mutator.h"
#include <random>
using namespace std;
class BitFlipProb: public Mutator{

public:
    BitFlipProb();
    Individual * mutate(Individual *individual, int k) override;
double prob;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_BITFLIPPROB_H
