#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int or1 = 5;
	int or2 = -1;
	scanf("%d %d", &or1, &or2);
	int pn1 = or1;
	int counter1 = 0;
	int counter2 = 0;
	float holder = 0;
	int nn1 = or1;
	int pn2 = or2;
	int nn2 = or2;
	float holdereq;
	int zeros1 = 1;
	int zeros2 = 1;
	while (pn1 && nn1) {
		pn1++;
		nn1--;
		counter1++;
		zeros1 = 0;
	}
	while (pn2 && nn2) {
		pn2++;
		nn2--;
		counter2++;
		zeros2 = 0;
	}
	while (zeros1 || zeros2) {
		while (zeros1) {
			while (nn2) {
				printf("%d is greater than %d", or1, or2);
				return 0;
			}
			while (pn2) {
				printf("%d is less than %d", or1, or2);
				return 0;
			}
			zeros1 = 0;
		}
		while (zeros2) {
			while (nn1) {
				printf("%d is less than %d", or1, or2);
				return 0;
			}
			while (pn1) {
				printf("%d is greater than %d", or1, or2);
				return 0;
			}
			zeros2 = 0;
		}
		printf("%d is equal to %d", or1, or2);
		return 0;
	}

	holdereq = counter1 / counter2;
	if (holdereq == 1) {
		printf("%d is equal to %d", or1, or2);
		return 0;
	}
	//00000000000000000000000
	while (pn1 && pn2) {
		holder = floor(counter1 / counter2);
		while (holder) {
			printf("%d is greater than %d", or1, or2);
			return 0;
		}
		holder++;
		while (holder) {
			printf("%d is less than %d", or1, or2);
			return 0;
		}
		return 0;
	}

	while (nn1 && nn2) {
		holder = floor(counter1 / counter2);
		while (holder) {
			printf("%d is less than %d", or1, or2);
			return 0;
		}
		holder++;
		while (holder) {
			printf("%d is greater  than %d", or1, or2);
			return 0;
		}
		return 0;
	}

	while (pn1 && nn2) {
		printf("%d is greater  than %d", or1, or2);
		return 0;
	}
	while (nn1 && pn2) {
		printf("%d is less than %d", or1, or2);
		return 0;
	}

	return 0;
}