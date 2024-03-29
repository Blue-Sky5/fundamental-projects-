#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int the_func(char a[], int step) {
	int temp = 0;
	for (int i = 0; i < 200; i++) {
		if (a[i] == '\0') {
			i = 201;
		}
		else {
			if (a[i] > 64 && a[i] < 91) {
				if ((a[i] - step) < 65) {
					temp = 65 - (a[i] - step);
					a[i] = 91 - temp;
				}
				else {
					a[i] = (a[i] - step);
				}
			}
		}

	}
}

int main(void) {
	char in[200];
	int step = 0;
	scanf("%d", &step);
	scanf("%s", in);
	step = step %= 26;
	the_func(in, step);
	printf("%s", in);
	return 0;
}