#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	
	int a, b, c;
	int num[10] = { 0, };
	int sum = 0;

	scanf("%d %d %d", &a, &b, &c);

	sum = a * b * c;
	int temp = 0;
	
	while (sum > 0) {
		temp = sum % 10;
		num[temp]++;
		sum /= 10;

	}

	for (int i = 0; i <= 9; i++) {
		printf("%d ", num[i]);
	}

		return 0;
	}
