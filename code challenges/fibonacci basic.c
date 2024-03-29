#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int number = 21;
	scanf("%d", &number);
	int x1 = 1;
	int x2 = 1;
	int temp = 0;
	int ans = 0;
	int counter = 1;
	while (x2 < number + 1) {
		temp = x2;
		x2 = x1 + x2;
		x1 = temp;
		counter += 1;
	}
	//printf("%d", counter);
	if (x1 == number) {
		printf("%d",counter);
	}
	else {
		printf("no");
	}
	return 0;
}