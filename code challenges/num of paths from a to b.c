#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int findRecursive(int x, int y, int x1, int y1)
{
	if (x == x1 && y == y1)
		return 1;
	else if (x == x1)
		return findRecursive(x, y, x1, y1 + 1);
	else if (y == y1)
		return findRecursive(x, y, x1 + 1, y1);
	else
		return findRecursive(x, y, x1 + 1, y1 + 1) + findRecursive(x, y, x1 + 1, y1) + findRecursive(x, y, x1, y1 + 1);
}

int main() {
	int x = 2;
	int y = 1;
	int fetch = 0;
	scanf(" %d%d", &x, &y);
	fetch = findRecursive(x, y, 1, 1);
	printf("%d", fetch);
}