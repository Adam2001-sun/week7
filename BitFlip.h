//
// Created by Sun Haoxian on 2/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_BITFLIP_H
#define CMAKE_CLION_CONAN_TEMPLATE_BITFLIP_H

#include "Mutator.h"
using namespace std;

class BitFlip :public Mutator {

public:
    BitFlip();
  Individual * mutate(Individual *individual, int k) override;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_BITFLIP_H
