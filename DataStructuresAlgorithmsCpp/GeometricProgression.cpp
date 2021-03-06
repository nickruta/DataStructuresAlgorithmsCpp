//
//  GeomProgression.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/26/16.
//

#include "GeometricProgression.hpp"

GeometricProgression::GeometricProgression(long b) : Progression(1), base(b) { }
// advance by multiplying
long GeometricProgression::nextValue() { cur *= base;
    return cur;
}
