#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int number3 = 21;
	scanf("%d", &number3);
	int number10 = 0;
	int counter = 0;
	int holder = 0;
	while (number3 > 0) {
		holder = number3 % 10;
		number3 = number3 / 10;
		number10 = number10 +(holder * pow(3, counter));
		counter = counter + 1;
	}
	printf("%d", number10);
	return 0;
}