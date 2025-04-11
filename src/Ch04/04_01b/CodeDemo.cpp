// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4

int main(){

    const size_t LEVEL_COUNT = 4;
    int enemies[LEVEL_COUNT];
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5};

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 25;
    enemies[3] = 40;
    
    std::cout << "The game has " << LEVEL_COUNT << " levels:" << std::endl;
    std::cout << "Level 1: " << enemies[0] << std::endl;
    std::cout << "Level 2: " << enemies[1] << std::endl;
    std::cout << "Level 3: " << enemies[2] << std::endl;
    std::cout << "Level 4: " << enemies[3] << std::endl;

    std::cout << std::endl << std::endl;
    std::cout << "The game has 4 difficulties:" << std::endl;
    std::cout << "Level 1: " << levelDifficulty[0] << std::endl;
    std::cout << "Level 2: " << levelDifficulty[1] << std::endl;
    std::cout << "Level 3: " << levelDifficulty[2] << std::endl;
    std::cout << "Level 4: " << levelDifficulty[3] << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
