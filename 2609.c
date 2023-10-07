#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int static gcb(int a, int b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	
	while (b != 0) {
		int n = a % b;
		a = b;
		b = n;
	}
	return a;
}


int main() {
	int a, b, num, sum;
	scanf("%d %d", &a, &b);
	num = gcb(a, b);
	sum = a * b / num;
	printf("%d\n%d", num, sum);
}
