//
//  FruitStation.h
//  Lab5.1
//
//  Created by Jason Ngo on 6/8/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#ifndef __Lab5_1__FruitStation__
#define __Lab5_1__FruitStation__

#include <iostream>
#include "Fruit.h"
const static int Jason=64;
using namespace std;

class FruitStation
{
public:
    FruitStation();
    FruitStation(string);
    ~FruitStation();
    
private:
    int size;
    /*Private data members: an array of pointers to Fruit objects (max of 64 pointers), an integer named size to keep track of the number of Fruit objects actually stored in the array
     */
    Fruit *obj[Jason];
        
    
    
    
    
    
};
#endif /* defined(__Lab5_1__FruitStation__) */
