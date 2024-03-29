#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int special_func(int a) {
	int counter = 1;
	int x1 = 1;
	int x2 = 2;
	int temp = 0;
	if (a <= 2) {
		if (a == 1) {
			printf("1 ");
		}
		else if (a == 2) {
			printf("2 ");
		}
		else {

		}
	}
	else {
		while (temp <= a) {
			temp = x1 + x2;
			x1 = x2;
			x2 = temp;
			counter += 1;
		}

		if (temp > a) {
			a = a - x1;
			printf("%d ", counter );
		}
		else {
			a = a - temp;
			printf("%d ", counter);
		}
		special_func(a);
	}


}

int main() {
	int n = 89;
	scanf("%d", &n);
	special_func(n);
}