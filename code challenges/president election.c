#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int core(int input, int power) {
	if (pow(2, power) > input) {
		return input % (int)pow(2, (power - 1));
	}
	else {
		core(input, power + 1);
	}
}

int main() {
	int input = 0;
	int remain = 0;
	scanf(" %d",&input);
	remain = core(input, 0);
	remain = 2 * remain + 1;
	printf("%d", remain);
}