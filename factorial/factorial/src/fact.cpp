#include <iostream>
#include "fact.h"


int factor(int num) {
    int fac = 1;
    if (num == 1) {
        return fac;
    }
    for(int i = 1; i <= num; ++i) {
        fac *= i;
    }
    return fac;
}