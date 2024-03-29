#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int a = 2;
	int b = 3;
	int c = 2;
	scanf(" %d %d %d", &a, &b, &c);
	int sum = 0;
	int one[a][b];
	int two[b][c];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			scanf(" %d", &one[i][j]);
		}
	}
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < c; j++) {
			scanf(" %d", &two[i][j]);
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < b; k++) {
				sum = sum + (one[i][k] * two[k][j]);
			}
			printf("%d ", sum);
			sum = 0;
		}
		printf("\n");
	}
}
