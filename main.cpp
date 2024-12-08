//
// Created by Daniel Mackle 0n 08/12/2024
//
#include <iostream>
#include <iomanip>
float cats(float, int);
float catsLess(float, int);
int main() {
    std::cout << std::fixed << std::setprecision(0) <<"Cats start at 0:" << cats(0, 25)<<std::endl;
}

float cats(const float catsSoFar, int repeat) {
    if (repeat <=0) return catsSoFar;
    const float result = (catsSoFar+12) * 13;
    std::cout<<std::endl<<"Ocelot Pride " << 25-repeat+1 << ": "<<result;
    return cats(result, --repeat);
}