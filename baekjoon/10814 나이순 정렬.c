#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100000

typedef struct {
	int num;
	char name[101];
	int sign;
}age;

int compare(const void* a, const void* b) {

	age A = *(age*)a;
	age B = *(age*)b;

	if (A.num < B.num) {
		return -1;
	}
	if (A.num > B.num) {
		return 1;
	}

	else {
		if (A.sign < B.sign) {
			return -1;
		}
		else {
			return 1;
		}
	}

}


int main() {

	int n;
	scanf("%d", &n);

	age* arr;
	arr = (age*)malloc(sizeof(age) * n);
	for (int i = 0; i < n;i++) {
		scanf("%d %s", &arr[i].num, &arr[i].name);
		arr[i].sign = i;
	}
	qsort(arr, n, sizeof(age), compare);
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", arr[i].num, &arr[i].name);
	}

	free(arr);

	return 0;
}
