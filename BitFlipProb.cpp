//
// Created by Sun Haoxian on 2/5/22.
//

#include "BitFlipProb.h"

 BitFlipProb::BitFlipProb() = default;

Individual BitFlipProb::mutate(Individual individual, int k) {


int randnum = rand()%2;

    std::string tmp_string = individual.getString();
    
    for (std::string::iterator it = tmp_string.begin(); it != tmp_string.end(); ++it) {

        double current_num = randnum;

        if (current_num <= this->randnum) {
            *it = *it == '0' ? '1' : '0';
        }

    }

    individual.setBinaryString(tmp_string);
    return individual;
}

