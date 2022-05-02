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

  Individual Newstring(*indPtr);

  Individual newIndi = mPtr->mutate(Newstring,k);

 Individual *indiviual = new Individual(newIndi);

 return indiviual;
 


}

int main(){


Mutator * bitFlip = new BitFlip();
Mutator * rearrange = new Rearrange();


string binarystring1 = " ";
string binarystring2 = " ";


int k1 = 0;
int k2 = 0; 

cin >> binarystring1 >> k1 >> binarystring2 >> k2;

Individual * Individual1 = new Individual(binarystring1);
Individual * Individual2 = new Individual(binarystring2);

cout<<execute(Individual1,bitFlip,k1)->getString()<< " ";

Individual * outcome = execute(Individual2,rearrange,k2);

cout << outcome->getString() << " "<<outcome->getMaxOnes() <<endl;


// //bitFlip test
// auto bitFlip = make_shared<BitFlip>();
// auto individual = make_shared<Individual>(8);
// Individual *out = bitFlip->mutate(individual.get(),10);
// cout << out->getString() << endl;

// //prob test

// auto bitFlipProb = make_shared<BitFlipProb>();
// auto individual3 = make_shared<Individual>(8);
// Individual *out2 = bitFlipProb->mutate(individual3.get(),8);
// cout << out2->getString() << endl;

// //rearrange test
// auto rearrange = make_shared<Rearrange>();
// auto individual4 = make_shared<Individual>("abcde");
// Individual *outcome = rearrange->mutate(individual4.get(),3);
// cout << outcome->getString() << endl;

}