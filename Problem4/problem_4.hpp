//
//  problem_4.hpp
//  
//
//  Created by Alberto Ferrando on 29/04/2020.
//

#define problem_4_hpp
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <string.h>
#include <algorithm>



bool is_palindrome(unsigned int n) {
    
    double size = trunc(log10(n)) + 1;
    std::string str = std::to_string(n);
    std::string str1, str2;
    
    if (fmod(size, 2.0) == 0) {
        
        str1 = str.substr(0, (size/2));
        str2 = str.substr((size/2), size/2);
        std::reverse(str2.begin(), str2.end());
        
        if (str1.compare(str2) == 0) {
            return true;
        } else {
            return false;
        }
            
    } else {
        
        str1 = str.substr(0, floor(size/2));
        str2 = str.substr(ceil(size/2), size);
        std::reverse(str2.begin(), str2.end());
        
        
        if (str1.compare(str2) == 0) {
            return true;
        } else {
            return false;
            }
        }
}


std::vector<double> find_divisors(unsigned int n, int min, int max) {
    
    double i = max;
    std::vector<double> divs (2);
    double quot = 0.0;
    double mod = 1;
    
    n = n * 1.0;
    
    while (mod != 0) {
        
        if (i < min) {
            
            divs[0] = 0;
            divs[1] = 0;
            
            return divs;
        }
        
        mod = fmod(n, i);
        quot = n/i;
        i--;
    }
    divs[0] = i+1;
    divs[1] = quot;
    
    return divs;
}
