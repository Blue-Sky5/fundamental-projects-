#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int factorial(int in) {
	int result = 1;
	if (in == 1 || in == 0) {
		return result;
	}
	else {
		for (int i = 2; i <= in;i ++ ) {
			result = result * i;
		}
		return result;
	}
}

int core(int a, int b) {
	int soorat = a;
	int makhraj = b;
	int ans = 0;
	int temp = a - b;
	ans = (factorial(soorat)) / (factorial(b) * factorial(temp));
	return ans; 
}


int main() {
	int input = 6;
	int temp = 0;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		for (int j = 0; j <= i; j++) {
			temp = core(i, j);
			printf("%d ", temp);
		}
		printf("\n");
	}
}