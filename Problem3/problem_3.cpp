//
//  problem_3.cpp
//  
//
//  Created by Alberto Ferrando on 27/04/2020.
//

#include <iostream>
#include <vector>

int main() {
    
    unsigned long n = 600851475143;
    int i2 = 0;
    std::vector<int> factors;
    
    std::cout << n << "\n";
    
    while (n % 2 == 0) {
        i2++;
        n = n / 2;
    }
    std::cout << "Power of two: " << i2 << "\n";
    
    for (int div = 3; n > 1; div = div + 2) {
        while (n % div == 0) {
            factors.push_back(div);
            n = n / div;
            std::cout << div << "\n";
        }
    }
}
