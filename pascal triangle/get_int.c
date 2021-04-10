#define _CRT_SECURE_NO_WARNINGS
#include "parscal.h"
#include <stdio.h>
#include<stdint.h>
#define MIN 3
#define MAX 20
int get_int(int min, int max) {
	int t;
	do {
		printf("Enter an positive integer \
				between (%d, %d): ", min, max);
		int r = scanf("%d", &t);
		if (r < 1) t = 0;
	} while (t < min || t > max);

	return t;
}
