#define _CRT_SECURE_NO_WARNINGS
#include "parscal.h"
#include <stdio.h>
#include <stdint.h>
#define MIN 3
#define MAX 20
void parscal_triangle(uint32_t i);
int get_int(int ,int);
uint32_t comb(uint32_t,uint32_t);
uint32_t fact(uint32_t);

int main() {
    uint32_t a;

	a = get_int( MIN , MAX);

	parscal_triangle(a);

	return 0;
}