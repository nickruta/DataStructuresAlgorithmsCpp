//
//  TestRecursiveFactorial.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 8/3/16.
//

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

int recursiveFactorial(int n) {                 // recursive factorial function
    if (n == 0) return 1;                       // basis case
    else return n * recursiveFactorial(n-1);	// recursive case
}

//Binary Recursion for the Fibonacci Sequence
//Input: Nonnegative integer k
//Output: The kth Fibonacci number
int BinaryFibonacci(int k) {
    if (k <= 1) {
        return k;
    } else {
        return BinaryFibonacci(k-1) + BinaryFibonacci(k-2);
    }
}

//int main () {
//    cout << "5! - " << recursiveFactorial(5) << endl;
//    cout << "Sixth value in the Fibonacci Sequence (1 1 2 3 5 8) - " << BinaryFibonacci(6) << endl;
//}