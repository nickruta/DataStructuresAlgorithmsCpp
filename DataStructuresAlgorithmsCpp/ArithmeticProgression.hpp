//
//  ArithProgression.hpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/26/16.
//  Copyright © 2016 Nicholas Ruta. All rights reserved.
//

#ifndef ArithmeticProgression_hpp
#define ArithmeticProgression_hpp

#include <stdio.h>
#include "Progression.hpp"

class ArithmeticProgression : public Progression { // arithmetic progression
public:
    ArithmeticProgression(long i = 1);
protected:
    // advance to next value
    virtual long nextValue();
protected:
    // increment
    long inc;
};

#endif /* ArithmeticProgression_hpp */
