#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//converts to another base from 10
int from_ten(long long int from, int to) {
	int q = 0;
	long long int temp = from;
	int counter = 0;
	int holder = 0;
	int counter2;
	while (1) {
		if (temp < to) {
			holder = temp;
			break;
		}
		else {
			temp = temp / to;
			q += 1;
		}
	}
	counter = q;
	counter2 = q;
	printf("%d", holder);
	for (int i = q; i > 0; i--) {
		temp = from;
		counter -= 1;
		while (counter > 0) {
			temp = temp / to;
			counter -= 1;
		}
		printf("%d", temp % to);
		counter2 -= 1;
		counter = counter2;
	}
}
//converts to base of 10 from others
long long int to_ten(char a, int from, int step, long long int ans) {
	int character = 0;
	//char to int;
	character = (int)a;
	if (character > 47 && character < 58) {
		//printf("yee");
		character = character - 48;
		ans = ans + character * (long long int) pow(from, step - 1);
		return ans;
	}
	else {
		return ans;
	}
}

int main(void) {
	char input = '0';
	long long int ans = 0;
	// from  this base
	int from = 2;
	//to this base
	int to = 10;
	//how many digits
	int step = 7;
	scanf(" %d %d %d", &from, &to, &step);
	if (from == 10 && to == 10) {
		scanf("%lld", &ans);
		printf("%lld", ans);
	}
	else if (from == 10) {
		scanf("%lld", &ans);
		from_ten(ans, to);
	}
	else {
		//step += 1;
		while (step > 0) {
			scanf(" %c", &input);
			ans = to_ten(input, from, step, ans);
			step -= 1;
		}
		if (to == 10) {
			printf("%lld", ans);
		}
		else {
			from_ten(ans, to);
		}
	}
}

