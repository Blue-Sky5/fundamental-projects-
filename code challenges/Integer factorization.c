#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int a) {
	int counter = a / 2;
	int temp = 0;
	while (counter > 1) {
		if (a % counter == 0) {
			temp += 1;
		}
		counter -= 1;
	}
	if (temp == 0 && a != 1) {
		return 1;
	}
	else {
		return 0;
	}
}


int main(void) {
	int input = 98;
	int counter = 2;
	int temp = 0 ;
	int power = 0;
	int prime = 0;
	scanf("%d", &input);
	temp = is_prime(input);
	if (temp == 1) {
		printf("%d", input);
	}
	else {
		while (counter <= input) {
			if (is_prime(counter) == 1) {
				power = 0;
				while (input % counter == 0) {
					prime = counter;
					input = input / counter;
					power += 1;
				}
				if (prime != 0) {
					printf("%d", prime);
				}
				if (power > 1) {
					printf("^%d", power);
				}
				if (prime != 0 && input > 1) {
					printf("*");
				}
			}
			power = 0;
			prime = 0;
			counter += 1;
		}
	}


}