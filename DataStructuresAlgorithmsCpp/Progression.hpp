//
//  Progression.hpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/26/16.
//  Copyright © 2016 Nicholas Ruta. All rights reserved.
//

#ifndef Progression_hpp
#define Progression_hpp

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

class Progression {
public:
    Progression(long f = 0) : first(f), cur(f) { };
    virtual ~Progression() { };
    // print the first n values
    void printProgression(int n);
protected:
    // reset
    virtual long firstValue();
    // advance
    virtual long nextValue();
protected:
    // first value
    long first;
    // current value
    long cur;
    };

#endif /* Progression_hpp */