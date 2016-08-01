//
//  ArithProgression.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/26/16.
//  Copyright © 2016 Nicholas Ruta. All rights reserved.
//

#include "ArithmeticProgression.hpp"

ArithmeticProgression::ArithmeticProgression(long i) : Progression(), inc(i) { }
// advance by adding 
long ArithmeticProgression::nextValue() { cur += inc;
    return cur;
}
