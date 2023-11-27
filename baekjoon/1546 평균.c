#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define max 1000

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) {
		return 1;
	}
	if (num2 > num1) {
		return -1;
	}
	return 0;
}

int main() {
	
	int grade[max];
	int sum;
	scanf("%d", &sum);

	for (int i = 0; i < sum; i++) {
		scanf("%d", &grade[i]);
	}

	qsort(grade, sum, sizeof(int), compare);
	float m = (float)grade[0];
	float num = 0;

	for (int i = 0; i < sum; i++) {
		num += ((float)grade[i] / (float)m) * 100;
	}
	num /= (float)sum;
	printf("%f", num);

	return 0;
}