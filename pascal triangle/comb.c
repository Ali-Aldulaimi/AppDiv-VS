#define _CRT_SECURE_NO_WARNINGS
#include "parscal.h"
#include <stdio.h>
#include <stdint.h>

uint32_t comb(uint32_t n, uint32_t m) {
	if (n < m) return 0;
	return fact(n) / (fact(n - m) * fact(m));
}
