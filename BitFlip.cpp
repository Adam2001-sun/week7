//
// Created by Sun Haoxian on 2/5/22.
//

#include "BitFlip.h"
#include <string>

BitFlip::BitFlip() = default;

Individual BitFlip::mutate(Individual individual, int k) {
    if (k<=0){
        return individual;
    }
    std:: string temp_s = individual.getString();

    int index = ( k - 1) % (int)temp_s.size();

    if (index <= 0){
        index = 0;
    }

    individual.flipBit(index + 1);

    return individual;
}
