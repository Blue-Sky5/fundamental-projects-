#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int a) {
	int counter = a/2;
	int temp = 0;
	while (counter > 1) {
		if (a % counter == 0) {
			temp += 1;
		}
		counter -= 1;
	}
	if (temp == 0 && a !=1) {
		return 1;
	}
	else {
		return 0;
	}
}


int power(int input) {
	int temp1 = 0;
	int temp2 = 0;
	int counter = 1;
	int ans = 0;
	if (input == 1 || input == 0) {
		printf("NO");
		return 0;
	}
	else if (is_prime(input) == 1) {
		printf("NO");
		return 0;
	}
	else {
		while (counter < input) {
			if (input % counter == 0) {
				if (temp1 != 0 && temp1 != 1) {
					temp2 = counter;
				}
				else {
					temp1 = counter;
				}
			}
			counter += 1;
		}
	}
	if (temp1 * temp1 == input && is_prime(temp1) == 1) {
		printf("YES");
		return 0;
	}
	ans = is_prime(temp1) + is_prime(temp2);
	if (ans == 2) {
		printf("YES");
		return 0;
	}
	else {
		printf("NO");
		return 0;
	}
}

int main(void) {
	int p = 14;
	scanf("%d", &p);
	power(p);
}