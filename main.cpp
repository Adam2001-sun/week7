//
// Created by Sun Haoxian on 2/5/22.
//

#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>
#include <string>

using namespace std;

  Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
      return mPtr->mutate(indPtr,k);
  }


int main(){

auto individual1 = make_shared<Individual>(8);
cout << individual1->getString() << endl;

auto individual2 = make_shared<Individual>("10011111110");
cout << individual2->getMaxOnes() << endl;


//bitFlip test
auto bitFlip = make_shared<BitFlip>();
auto individual = make_shared<Individual>(8);
Individual *out = bitFlip->mutate(individual.get(),10);
cout << out->getString() << endl;

//prob test
//bitFlip test
auto bitFlipProb = make_shared<BitFlipProb>();
auto individual3 = make_shared<Individual>(8);
Individual *out2 = bitFlipProb->mutate(individual3.get(),8);
cout << out2->getString() << endl;

//rearrange test
auto rearrange = make_shared<Rearrange>();
auto individual4 = make_shared<Individual>("abcde");
Individual *outcome = rearrange->mutate(individual4.get(),3);
cout << outcome->getString() << endl;



}