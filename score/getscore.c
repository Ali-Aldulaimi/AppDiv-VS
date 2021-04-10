
#include "score.h"
#define MAX 30
void input_scores(int scores[]) {
	int i, input = 0;

	printf("Enter scores,-1 to end:\n");
	for (i = 0; i < MAX && input != -1;i++) {
		printf("score %d:",i+1);
		scanf("%d", &input);
		scores[i] = input;
	}


}