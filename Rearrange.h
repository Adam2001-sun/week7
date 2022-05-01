//
// Created by Sun Haoxian on 2/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_REARRANGE_H
#define CMAKE_CLION_CONAN_TEMPLATE_REARRANGE_H

#include "Mutator.h"

class Rearrange :public Mutator {

    Rearrange();
    Individual * mutate(Individual *individual, int k) override;


};


#endif //CMAKE_CLION_CONAN_TEMPLATE_REARRANGE_H
