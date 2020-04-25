//
//  problem_1.cpp
//  
//
//  Created by Alberto Ferrando on 23/04/2020.
//

#include "problem_1.hpp"
#include <iostream>
#include <vector>


int main() {
    int limit3, limit5;
    std::vector<int> multiples3, multiples5;
    std::vector<int> multipliers3, multipliers5;

    
    
    limit3 = find_multiplier_limit(3, 1000);
    limit5 = find_multiplier_limit(5, 1000);
    multipliers5 = list_multipliers(limit5);
    multipliers3 = list_multipliers(limit3);
    multiples5 = find_multiples(multipliers5, 5);
    multiples3 = find_multiples(multipliers3, 3);
    
    std::vector<int> all_multiples = multiples5;
    all_multiples.insert(all_multiples.end(), multiples3.begin(), multiples3.end());
    all_multiples = erase_duplicates(all_multiples);
    
    int sum_of_elems = 0;
    
    for (std::vector<int>::iterator it = all_multiples.begin(); it != all_multiples.end(); it++) {
        sum_of_elems += *it;
    }
    std::cout << "Here's your answer: " << sum_of_elems << "\n";
}
