#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int e_bmm(int a,int b , int r) {
	r = a % b;
	if (r == 0) {
		printf("%d", b);
	}
	else {
		a = b;
		b = r;
		e_bmm(a, b, r);
	}
}

int main(void){
	int a = 45;
	int b = 10;
	int temp = 0;
	scanf(" %d %d", &a,&b);
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	e_bmm(a, b, temp);
}

