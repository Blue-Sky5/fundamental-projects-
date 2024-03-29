#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int input1 = 5;
	scanf("%d", &input1);
	int input = input1;
	int counter = 0;
	int fcounter = input1;
	int spacegray = 1;
	int spacegray2 = 1;
	while (counter < input) {
		for (fcounter; fcounter > 0; fcounter--) {
			printf("*");
		}
		for (spacegray2; spacegray2 > 0; spacegray2--) {
			printf(" ");
		}
		fcounter = input1;
		for (fcounter; fcounter > 0; fcounter--) {
			printf("*");
		}
		if (counter != (input)) {
			printf("\n");
		}
		input1 -= 1;
		counter += 1;
		fcounter = input1;
		spacegray += 2;
		spacegray2 = spacegray;
	}
	counter = 0;
	input1 = 1;
	while (counter < input) {
		spacegray -= 2;
		spacegray2 = spacegray;
		fcounter = input1;
		for (fcounter; fcounter > 0; fcounter--) {
			printf("*");
		}
		for (spacegray2; spacegray2 > 0; spacegray2--) {
			printf(" ");
		}
		fcounter = input1;
		for (fcounter; fcounter > 0; fcounter--) {
			printf("*");
		}
		if (counter != (input - 1)) {
			printf("\n");
		}
		input1 += 1;
		counter += 1;
	}
	return 0;
}