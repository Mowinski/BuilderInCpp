//
// Created by xnast on 8/17/2018.
//

#ifndef BUILDERPRESENTATION_BUILDER_H
#define BUILDERPRESENTATION_BUILDER_H

class IBuilder {
public:
    virtual int getStep1() = 0;
    virtual int getStep2() = 0;
    virtual int getStep3() = 0;
    virtual int getStep4() = 0;
};

#endif //BUILDERPRESENTATION_BUILDER_H
