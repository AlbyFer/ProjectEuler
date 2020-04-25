//
//  functions_probelm_1.cpp
//  
//
//  Created by Alberto Ferrando on 25/04/2020.
//

#include <stdio.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

int find_multiplier_limit(int value, int limit) {
    
    int multiplier_limit = floor(limit/value);
    
    if (multiplier_limit % 2 == 0) {
        multiplier_limit--;
    }
    
    return multiplier_limit;
}


std::vector<int> list_multipliers(int limit) {
    
    std::vector<int> multiples (1);
    multiples[0] = 1;
    
    int i = 2;
    while (i <= limit) {
        
        multiples.push_back(i);
        i++;
    }
    
    return multiples;
}


std::vector<int> find_multiples(std::vector<int> multipliers, int constant) {
    
    std::vector<int> multiples;
    
    int i=0;
    while (i < multipliers.size()) {
        multiples.push_back(constant * multipliers[i]);
        i++;
    }
    
    return multiples;
}


std::vector<int> erase_duplicates(std::vector<int> v) {
    
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    
    return v;
}
