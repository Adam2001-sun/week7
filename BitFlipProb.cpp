//
// Created by Sun Haoxian on 2/5/22.
//

#include "BitFlipProb.h"

 BitFlipProb::BitFlipProb(double p){

     

 }

Individual BitFlipProb::mutate(Individual individual, int k) {


    int randnum = rand()%2;

    std::string new_str = individual.getString();
    
    for (std::string::iterator it = new_str.begin(); it != new_str.end(); ++it) {

        double current_num = randnum;

        if (current_num <= this->randnum) {
            *it = *it == '0' ? '1' : '0';
        }

    }

    individual.setBinaryString(new_str);

    return individual;
}

