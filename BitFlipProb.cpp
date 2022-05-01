//
// Created by Sun Haoxian on 2/5/22.
//

#include "BitFlipProb.h"


Individual *BitFlipProb::mutate(Individual * individual, int k) {
    //reference from https://stackoverflow.com/questions/39288595/why-not-just-use-random-device
    std::random_device rd;
    std::mt19937 e{rd()};
    std::uniform_int_distribution<double> dist{0, 1};

// get random numbers with:
    dist(e);

    std::string tmp_string = individual->getString();

    for (char &c: tmp_string) {
        double current_num = dist(e);

        if (current_num <= this->prob) {
            c = c == '0' ? '1' : '0';
        }

    }

    individual->setBinaryString(tmp_string);
    return individual;
}

