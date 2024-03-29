#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	char a[10000];
	char b[10000];
	int ans[20000] = {0};
	int count_a = 0;
	int count_b = 0;
	int count_ta = 0;
	int count_tb = 0;
	int temp1 = 0;
	int temp2 = 0;
	scanf("%s", a);
	scanf("%s", b);
	for (int i = 0; i < 10000; i++) {
		if (a[i] == '\0') {
			i = 10005;
		}
		else {
			count_a += 1;
		}
	}
	count_a -= 1;
	count_ta = count_a;
	for (int i = 0; i < 10000; i++) {
		if (b[i] == '\0') {
			i = 10005;
		}
		else {
			count_b += 1;
		}
	}
	count_b -= 1;
	count_tb = count_b;
	for (int i = 0; i <= count_b; i++) {
		for (int j = 0; j <= count_a; j++) {
			temp1 = (int)b[count_tb] - 48;
			temp2 = (int)a[count_ta] - 48;
			ans[i + j] = ans[i + j] + (temp1 * temp2);
			count_ta -= 1;
		}
		count_tb -= 1;
		count_ta = count_a;
	}
	
	int max = count_a;
	if (max < count_b) {
		max = count_b;
	}
	max = max * 2;
	for (int i = 0; i <= max +1; i++) {
		if (ans[i] > 9) {
			temp1 = ans[i] / 10;
			ans[i] = ans[i] % 10;
			ans[i + 1] = ans[i + 1] +temp1;
		}
	}
	for (int i = 0; i <= max + 1; i++) {
		if (ans[i] > 0) {
			temp1 = i;
		}
	}
	for (int i = temp1; i >=0 ; i--) {
		printf("%d",ans[i]);
	}
	return 0;
}
	