//
// Created by Sun Haoxian on 2/5/22.
//




#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>


using namespace std;

  Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
      return mPtr->mutate(indPtr,k);
  }


int main(){

  


}