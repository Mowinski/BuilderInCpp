//
// Created by xnast on 8/17/2018.
//

#ifndef BUILDERPRESENTATION_BUILDER1_H
#define BUILDERPRESENTATION_BUILDER1_H

#include "builder.h"

class PrimeNumbers : public IBuilder {
public:
    int getStep1() override;
    int getStep2() override;
    int getStep3() override;
    int getStep4() override;
};


#endif //BUILDERPRESENTATION_BUILDER1_H
