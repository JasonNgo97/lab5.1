//
//  OnlineSuperMarket.cpp
//  Lab5.1
//
//  Created by Jason Ngo on 6/8/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#include "OnlineSuperMarket.h"

OnlineSuperMarket::OnlineSuperMarket()
{
    obj= *new FruitStation();//dynamically allocate a default FruitStation object

    
}
OnlineSuperMarket::OnlineSuperMarket(string fat)
{
  /*  dynamically allocate a non-default FruitStation object. In this case you must pass an array of Fruit objects to this constructor
   */
}
