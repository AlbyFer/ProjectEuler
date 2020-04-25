//
//  problem_1.hpp
//  
//
//  Created by Alberto Ferrando on 23/04/2020.
//

#ifndef problem_1_hpp
#define problem_1_hpp

#include <stdio.h>
#include <vector>


#endif /* problem_1_hpp */

int find_multiplier_limit(int value, int limit = 1000);

std::vector<int> list_multipliers(int limit);

std::vector<int> find_multiples(std::vector<int> multipliers, int constant);

std::vector<int> erase_duplicates(std::vector<int> multiples);
