// Complete Guide to C++ Programming Foundations
// Challenge 03_08
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

double add_values(int a, int8_t b, uint32_t c){
    return static_cast<double>(a) + static_cast<double>(b) + static_cast<double>(c);
}

double my_average(int a, int8_t b, uint32_t c){
    double result = 0.0;

    double added_values = add_values(a,b,c);
    result = added_values / 3;
    
    return result;
}

int main(){
    int a = -12;
    int8_t b = 15;
    uint32_t c = 10;
    double learnerResult = my_average(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}