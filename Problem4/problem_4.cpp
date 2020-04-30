//
//  problem_4.cpp
//  
//
//  Created by Alberto Ferrando on 29/04/2020.
//

#include "problem_4.hpp"
#include <iostream>
#include <vector>


int main() {
    bool test;
    unsigned long n = 999*999;
    
    test = is_palindrome(n);
    std::cout << n << (test == 1 ? " is palindrome" : " is NOT a palindrome") << "\n";
}
