#include <array>
#include <iostream>
#include "./builders/builder.h"
#include "./builders/FermatNumbers.h"
#include "./builders/PrimeNumbers.h"
#include "./builders/PrimeQuadruplet.h"
#include "./builders/TwinsPrimeNumbers.h"
#include "Director.h"


IBuilder* getBuilderFromUserInput() {
    int number = 0;
    std::cout << "Choose numbers type:" << std::endl;
    std::cout << "1 - Fermat Number" << std::endl;
    std::cout << "2 - Prime Number" << std::endl;
    std::cout << "3 - Prime Quadruplet Number" << std::endl;
    std::cout << "4 - Twins Prime Number" << std::endl;
    std::cout << ">> ";
    std::cin >> number;

    switch(number) {
        case 1:
            return new FermatNumbers();

        case 2:
            return new PrimeNumbers();

        case 3:
            return new PrimeQuadruplet();

        case 4:
            return new TwinsPrimeNumbers();
    }

    return nullptr;
}

int main() {
    IBuilder* builder = getBuilderFromUserInput();
    Director director(builder);

    std::array<int, MAX_NUMBERS_COUNT> ascNumber = director.getAscendingNumbers();
    std::array<int, MAX_NUMBERS_COUNT> descNumber = director.getDescendingNumbers();

    for(int i = 0; i < MAX_NUMBERS_COUNT; i++) {
        std::cout << "ASC[i] = " << ascNumber[i] << " DESC[i] = " << descNumber[i] << std::endl;
    }
    return 0;
}