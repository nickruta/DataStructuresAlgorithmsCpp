//
//  Progression.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/26/16.
//  Copyright © 2016 Nicholas Ruta. All rights reserved.
//

#include "Progression.hpp"

// print n values
void Progression::printProgression(int n) {
    // print the first value
    cout << firstValue();
    // print 2 through n
    for (int i = 2; i <= n; i++)
        cout << " " << nextValue(); cout << endl;
    cout << endl;
}

long Progression::firstValue() {
    cur = first;
    return cur;
}
long Progression::nextValue() {
    return ++cur;
}