//
//  TestInsertionSort.cpp
//  DataStructuresAlgorithmsCpp
//
//  Created by Nicholas Ruta on 7/29/16.
//
#include <stdio.h>
#include <iostream>

// sort an array of n characters
char* insertionSort(char* A, int n) {
    
    // insertion loop
    for (int i = 1; i < n; i++) {
        
        // current character to insert
        char cur = A[i];
        
        // start at previous character
        int j = i - 1;
        
        // while A[j] is out of order
        while ((j >= 0) && (A[j] > cur)) {
            
            // move A[j] right
            A[j + 1] = A[j];
            
            // decrement j
            j--;
        }
        // this is the proper place for cur
        A[j + 1] = cur;
    }
    return A;
}

//int main() {
//    
//    char* a = new char[10]{'b','a','e','d','f','c'};
//    std::cout << "Before Sorting - " << a << "\n" << std::endl;
//    std::cout <<"After Sorting - " << insertionSort(a, 6) << "\n" << std::endl;
//    delete [] a;
//
//    // successful execution
//    return EXIT_SUCCESS;
//}