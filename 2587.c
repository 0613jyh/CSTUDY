#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int n = 0;
	int sum = 0;
	int num[5] = { 0, };
	int min;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
	}

	n = sum / 5;
	sum = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (num[i] > num[j]) {
				min = num[i];
				num[i] = num[j];
				num[j] = min;
			}
		}
	}

	printf("%d\n%d", n, num[2]);
 

		return 0;
	}
