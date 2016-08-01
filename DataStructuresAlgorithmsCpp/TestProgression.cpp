//
//  TestProgression.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/26/16.
//

#include <stdio.h>
#include "Progression.hpp"
#include "GeometricProgression.hpp"
#include "ArithmeticProgression.hpp"
#include "FibonacciProgression.hpp"

// Test program for the progression classes
//int main() {
//    Progression* prog;
//    // test ArithmeticProgression
//    cout << "Arithmetic progression with default increment:\n";
//    prog = new ArithmeticProgression();
//    prog->printProgression(10);
//    cout << "Arithmetic progression with increment 5:\n";
//    prog = new ArithmeticProgression(5);
//    prog->printProgression(10);
//    // test GeometricProgression
//    cout << "Geometric progression with default base:\n";
//    prog = new GeometricProgression();
//    prog->printProgression(10);
//    cout << "Geometric progression with base 3:\n";
//    prog = new GeometricProgression(3);
//    prog->printProgression(10);
//    // test FibonacciProgression
//    cout << "Fibonacci progression with default start values:\n";
//    prog = new FibonacciProgression();
//    prog->printProgression(10);
//    cout << "Fibonacci progression with start values 4 and 6:\n";
//    prog = new FibonacciProgression(4, 6);
//    prog->printProgression(10);
//    
//    // successful execution
//    return EXIT_SUCCESS;
//}