//
//  GeomProgression.hpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/26/16.
//

#ifndef GeometricProgression_hpp
#define GeometricProgression_hpp

#include <stdio.h>
#include "Progression.hpp"

// geometric progression
class GeometricProgression : public Progression {
    public:
        GeometricProgression(long b = 2);
    protected:
        virtual long nextValue();
    protected:
        // the base value
        long base;
};

#endif /* GeometricProgression_hpp */
