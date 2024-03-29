#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void little_func(char a[], char b[][2]) {
	int counter = 0;
	int flag = 1;
	for (int i = 0; i < 101; i++) {
		if (a[i] == '\0') {
			i = 103;
		}
		else {
			for (int j = 0; j <= counter; j++) {
				if (b[j][0] == a[i]) {
					b[j][1] += 1;
					j = counter + 1;
					flag = 0;
				}
				else {

				}
			}
			if (flag == 1) {
				b[counter][0] = a[i];
				b[counter][1] = 1;
				counter += 1;
			}
			
		}
	}
	b[counter][0] = '\0';
}


int main(void) {
	char a[101];
	char b[26][2];
	int check = 0;
	scanf("%s", a);
	little_func(a,b);
	for (int i = 0; i < 26; i++) {
		if (b[i][0] == '\0') {
			i = 27;
		}
		else {
			if (b[i][1] % 2 != 0) {
				check += 1;
			}
		}
	}
	if (check == 0) {
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
	