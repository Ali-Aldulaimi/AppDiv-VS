#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<curl/curl.h>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


#define N 20 // legth of user name 

typedef struct {
	int max;
	int min;
	char rname[20];  // this string can hol N-1 chatacters 
	}rock ;
void send_data(rock);