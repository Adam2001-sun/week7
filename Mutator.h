//
// Created by Sun Haoxian on 2/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_MUTATOR_H
#define CMAKE_CLION_CONAN_TEMPLATE_MUTATOR_H

#include "Individual.h"
using namespace std;
class Mutator {
public:

virtual Individual * mutate(Individual * individual, int k) = 0;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_MUTATOR_H
