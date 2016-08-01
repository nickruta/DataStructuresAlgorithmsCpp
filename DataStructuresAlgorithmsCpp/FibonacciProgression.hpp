//
//  FibonacciProgression.hpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/26/16.
//

#ifndef FibonacciProgression_hpp
#define FibonacciProgression_hpp

#include <stdio.h>
#include "Progression.hpp"

class FibonacciProgression : public Progression {
    public:
        FibonacciProgression(long f = 0, long s = 1);
    protected:
        // reset
        virtual long firstValue();
        // advance to next value
        virtual long nextValue();
    protected:
        // second value
        long second;
        // previous value
        long prev;
};

#endif /* FibonacciProgression_hpp */