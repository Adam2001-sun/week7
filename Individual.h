//
// Created by Sun Haoxian on 2/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_INDIVIDUAL_H
#define CMAKE_CLION_CONAN_TEMPLATE_INDIVIDUAL_H

#include <string>
#include <algorithm>
using namespace std;
class Individual {

public:
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    explicit Individual(int length);
    explicit Individual(std::string input);
    void setBinaryString(const std::string &binaryString);

private:
    std::string binaryString;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_INDIVIDUAL_H
