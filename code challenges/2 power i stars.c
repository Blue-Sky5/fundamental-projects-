#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void stary(int a, int temp) {
	int k = 0;
	if (temp <= a) {
		for (int i = 1; i <= pow(2, temp); i = i+1) {
			printf("*");
		}
		printf("\n");
		stary(a, temp + 1);
	}
	else if (a >= 1) {
		k = a - 1;
		for (int i = 1; i <= pow(2, k); i = i + 1) {
			printf("*");
		}
		if(a!=1)
		printf("\n");
		stary(a-1, temp);
	}
	else {
		
	}
	
}

int main(void){
	int a = 4;
	int temp = 0;
	scanf("%d", &a);
	a = a - 1;
	stary(a,temp);
}

