#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void reverse(const char* str) {
	if (*str == '\0') {
		return;
	}
	else {
		reverse(str+1);
		printf("%c",*str);
	}
}

main() {
	char input[100];
	scanf("%s", input);
	reverse(input);
	return 0;
}
