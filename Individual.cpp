//
// Created by Sun Haoxian on 2/5/22.
//

#include "Individual.h"

std::string Individual:: getString(){
    return this->binaryString;
}

int Individual::getBit(int pos){
    pos--;
    if(this->binaryString[pos] >= pos){
        return -1;
    }
    return this->binaryString[pos];
}

void Individual::flipBit(int pos){
    pos--;
    char &c = binaryString[pos];

//c = c == '0' ? '1' : '0';

    if(c == '0'){
        c ='1';
    }else{
        c = '0';
    }
}

int Individual:: getMaxOnes() {

    int counter = 0, result = 0;
    for (int i = 0; i < (int) this->binaryString.length(); ++i) {
        if (binaryString[i] == '1') {
            counter++;
        } else {
            counter = 0;
        }
    result = std::max(result,counter);
    }
    return result;
}

int Individual::getLength(){
    return (int) this->binaryString.length();
}


Individual::Individual(int length){
    this->binaryString.resize(length);

    for (int i = 0; i < (int) this->binaryString.length(); ++i){
        binaryString[i]='0';
    }
}

Individual::Individual(const std::string input){
    this->binaryString = move(input);

}

void Individual::setBinaryString(const std::string &binaryString){
    Individual::binaryString = binaryString;

};
