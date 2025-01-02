// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <cstring>

int main(){
    std::string name;
    std::cout << "Your name: " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}