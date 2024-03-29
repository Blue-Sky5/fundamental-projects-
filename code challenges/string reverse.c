#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int recursive(char a[], int counter, int temp) {
	if (counter == temp) {
		printf("%c", a[counter]);
		return 0;
	}
	else {
		recursive(a, counter - 1, temp);
		printf("%c", a[counter]);
	}
}

void core(char a[], int counter) {
	if (a[counter] == ' ') {
		counter -= 1;
	}
	int temp = 0;
	for (int i = counter; i > -1; i--) {
		if (a[i] == ' ') {
			temp = i + 1;
			recursive(a, counter, temp);
			counter = i - 1;
			printf(" ");
		}
	}
	recursive(a, counter, 0);
}


int main(void) {
	char a[1000];
	int n = 0;
	int counter = 0;
	scanf("%d", &n);
	scanf(" %[^\n]s", a);
	for (int i = 0; i < 1000; i++) {
		if (a[i] == '\0') {
			i = 1005;
		}
		else {
			counter += 1;
		}
	}
	counter -= 1;
	core(a, counter);
	return 0;
}
