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
    bool test = 0;
    std::vector<double> divs (2);
    unsigned long n =  999*999;
    
    while ((n >= 100*100) && (test != 1)) {
        std::cout << n << "\n";
        test = is_palindrome(n);
        if (test == 1) {
            divs = find_divisors(n, 100, 999);
            
            double div0 = divs[0];
            double div1 = divs[1];
            double size0 = trunc(log10(div0)) + 1;
            double size1 = trunc(log10(div1)) + 1;
            
            
            if ((div0 != 0.0) && (div1 != 0.0) && (size0 == 3.0) && (size1 == 3.0)) {
                test = 1;
                std::cout << "\n" << n << " is the biggest palindrome in domain." << "\n" << "with divisors " << divs[0] << " and " << divs[1] << "\n";
            } else {
                test = 0;
            }
        }
        n--;
    }
}

