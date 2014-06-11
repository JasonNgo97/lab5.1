//
//  OnlineSuperMarket.h
//  Lab5.1
//
//  Created by Jason Ngo on 6/8/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#ifndef __Lab5_1__OnlineSuperMarket__
#define __Lab5_1__OnlineSuperMarket__

#include <iostream>
#include "FruitStation.h"
using namespace std;

class OnlineSuperMarket
{
public:
 /*This is supposed to initialize all objects
  Constructors (default constructor and non­default constructor): initialize Market name, web address, and for
  Default constructor: dynamically allocate a default FruitStation object
  Non­default constructor: dynamically allocate a non­default FruitStation object. In this case you must pass an array of Fruit objects to this constructor
*/
    
    OnlineSuperMarket();
    OnlineSuperMarket(string);
    ~OnlineSuperMarket();
    void Run();
    void FruitStationHandler();
    void Quit();
private:
    /* 
     a pointer to FruitStation object
     */
    FruitStation obj;
    FruitStation *pobj=&obj;
    
    /*
     Market name (XXX for example
     */
    string Marketname;
    
    /*
      web address (http://www.xyz.com for example)
     */
    
    string link;
    
};
#endif /* defined(__Lab5_1__OnlineSuperMarket__) */
