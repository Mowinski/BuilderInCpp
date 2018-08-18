//
// Created by xnast on 8/17/2018.
//

#include "Director.h"


std::array<int, MAX_NUMBERS_COUNT> Director::getAscendingNumbers() {
    std::array<int, MAX_NUMBERS_COUNT> numbers{};

    numbers[0] = builder->getStep1();
    numbers[1] = builder->getStep2();
    numbers[2] = builder->getStep3();
    numbers[3] = builder->getStep4();

    return numbers;
}

std::array<int, MAX_NUMBERS_COUNT> Director::getDescendingNumbers() {
    std::array<int, MAX_NUMBERS_COUNT> numbers{};

    numbers[3] = builder->getStep1();
    numbers[2] = builder->getStep2();
    numbers[1] = builder->getStep3();
    numbers[0] = builder->getStep4();

    return numbers;
}

Director::~Director() {
    if(!builder) return;

    delete builder;
    builder = nullptr;
}
