//
// Created by Sun Haoxian on 2/5/22.
//

#include "Rearrange.h"


Rearrange::Rearrange() = default;

Individual Rearrange::mutate(Individual individual, int k) {
    if(k<=0){
        return individual;
    }
    std::string tmp_s = individual.getString();

    std::string empty_string;

    int index = (int)tmp_s.size() - ((k-1) % (int)tmp_s.size());
 
    int front = (int) tmp_s.size()-index;

    empty_string = tmp_s.substr(front,index);

    for (int i = 0; i < front; i++){
        empty_string.push_back(tmp_s[i]);

    }

    individual.setBinaryString(empty_string);

    return individual;



}
