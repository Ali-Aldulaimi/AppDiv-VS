#define _CRT_SECURE_NO_WARNINGS
#include "parscal.h"
#include <stdio.h>
#include <stdint.h>

void parscal_triangle(uint32_t v) {
	uint32_t i, j, space;
	int count = 0;

	for (i = 0; i < v; i++) {
		//for (space = 1; space <= v-i ;++space) {
		//	printf("  .  ");
		//	--count;
		//}

		// some spaces to start each line
		for (j = 0; j <= i; j++) {
			//for (int k = 0;k < j;k++) {

			printf("%4d", comb(i, j));


		}
		printf("\n");
	}
}
	


