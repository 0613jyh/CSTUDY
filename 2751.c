#include <stdio.h>
#include <stdlib.h>
#define m 1000000

int num[m];

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) {
		return -1;
	}

	if (num1 > num2) {
		return 1;
	 
	}
}


int main() {

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	qsort(num, n, sizeof(int), compare);

	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}


