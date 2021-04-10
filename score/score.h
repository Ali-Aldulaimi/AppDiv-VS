#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//in a header file , usually we put  following ingormation "
//1.constant definitions 
//2. data structure definitions 
//3. function prototypes 

#define MAX 30

// we dont use complex data structure in this program 
void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);