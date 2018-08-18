//
// Created by xnast on 8/17/2018.
//

#ifndef BUILDERPRESENTATION_PRIMEQUADRUPLET_H
#define BUILDERPRESENTATION_PRIMEQUADRUPLET_H

#include "builder.h"

class PrimeQuadruplet : public IBuilder {
public:
    int getStep1() override;
    int getStep2() override;
    int getStep3() override;
    int getStep4() override;
};


#endif //BUILDERPRESENTATION_PRIMEQUADRUPLET_H
