#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define max1 6
#define max2 5

int the_func1(char patern1[], char a[]) {
	int counter = 0;
	for (int i = 0; i < 20; i++) {
		if (a[i] > 64 && a[i] < 91) {
			if (a[i] == patern1[counter]) {
				for (int j = i ; j < i + max1; j++) {
					if (a[j] == patern1[counter]) {
						counter += 1;
					}
				}
				if (counter == max1) {
					i = 21;
					return 1;
				}
				else {

				}
			}
		}
	}
	if (counter != max2) {
		return 0;
	}
}
int the_func2(char patern2[], char a[]) {
	int counter = 0;
	for (int i = 0; i < 20; i++) {
		if (a[i] > 64 && a[i] < 91) {
			if (a[i] == patern2[counter]) {
				for (int j = i ; j < i + max2; j++) {
					if (a[j] == patern2[counter]) {
						counter += 1;
					}
				}
				if (counter == max2) {
					i = 21;
					return 1;
				}
				else {

				}
			}
		}
	}
	if (counter != max2) {
		return 0;
	}
}

int main(void) {
	char a[20];
	int check1 = 0;
	int check = 0;
	char patern1[6] = "MOLANA";
	char patern2[5] = "HAFEZ";
	int round = 1;
	char buff = 'a';
	while (round < 6) {
		scanf("%s", a);
		check1 = the_func1(patern1, a);
		if (check1 == 1) {
			printf("%d ", round);
		}
		else {
			check1 = the_func2(patern2, a);
			if (check1 == 1) {
				printf("%d ", round);
			}
			check += check1;
		}
		check += check1;
		round += 1;
	}
	if (check == 0) {
		printf("NOT FOUND!");
	}
	return 0;
}