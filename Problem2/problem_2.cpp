//
//  problem_2.cpp
//  
//
//  Created by Alberto Ferrando on 26/04/2020.
//

#include "problem_2.hpp"
#include <iostream>

int main() {
    
    long int f0 = 1, f1 = 2, sum = 2, f2;
    
    while (f1 < 4000000) {
        
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
        
        if (f1 % 2 == 0) {
            sum = sum + f1;
            std::cout << f0 << " " << f1 << " " << sum << "\n";
        }
        
        }
    
}
