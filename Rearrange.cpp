//
// Created by Sun Haoxian on 2/5/22.
//

#include "Rearrange.h"


Rearrange::Rearrange() = default;

Individual Rearrange::mutate(Individual individual, int k) {

    if(k<=0){
        return individual;
    }

    std::string current_str = individual.getString();

    std::string strToadd;

    int index = (int)current_str.size() - ((k-1) % (int)current_str.size());
 
    int front = (int) current_str.size()-index;

    strToadd = current_str.substr(front,index);

    for (int i = 0; i < front; i++){
        strToadd.push_back(current_str[i]);

    }

    individual.setBinaryString(strToadd);

    return individual;



}
