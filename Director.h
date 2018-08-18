//
// Created by xnast on 8/17/2018.
//

#ifndef BUILDERPRESENTATION_DIRECTOR_H
#define BUILDERPRESENTATION_DIRECTOR_H

#include <array>
#include "./builders/builder.h"

#define MAX_NUMBERS_COUNT 4


class Director {
public:
    Director(IBuilder* _builder) : builder(_builder) {};
    ~Director();

    std::array<int, MAX_NUMBERS_COUNT> getAscendingNumbers();
    std::array<int, MAX_NUMBERS_COUNT> getDescendingNumbers();

protected:
    IBuilder *builder;
};


#endif //BUILDERPRESENTATION_DIRECTOR_H
