#define _CRT_SECURE_NO_WARNINGS
#include "parscal.h"
#include <stdio.h>
#include<stdio.h>
#include<stdint.h>

uint32_t fact();

uint32_t fact(uint32_t n) {
    if (n < 0) return 0;
    else if (n < 2) return 1;
    uint32_t p = 1, i;


    for (uint32_t i = 1; i <= n;++i) {

        p = p * i;

    }

    return p;
}
