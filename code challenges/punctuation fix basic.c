#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main() {
	char string[10000];
	int i = 0;
	int temp = 0;
	char check = '\0';
	scanf("%[^\n]s", string);
	while (string[i] != '\0') {
		if (isalnum(string[i])) {
			printf("%c", string[i]);
			i += 1;
		}
		else {
			while (1) {
				if (string[i] == ' ') {
					check = 's';
					i += 1;
				}
				else if (ispunct(string[i])) {
					printf("%c", string[i]);
					i += 1;
				}
				else if(isalnum(string[i])){
					break;
				}
			}
			printf(" ");
		}
	}
	return 0;
}