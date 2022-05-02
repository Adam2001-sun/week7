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


}