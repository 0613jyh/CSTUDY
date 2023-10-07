#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define max 100


int compare(const void *a, const void *b) {
	if (*(int*)a > *(int*)b) {
		return -1;
	}
	else if (*(int*)b > *(int*)a) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	
	int uni[max] = { 0, };
	int n;
	int sum = 0;
	int count = 0;
	int unimax = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &uni[i]);
	}

	qsort(uni, n, sizeof(int), compare);
	
	

	for (int i = 0; i < n; i++) {
		if (unimax < 42) {
			sum += uni[i];
			if (uni[i] >= 250) {
				count += 5;
				unimax++;
			}
			else if (uni[i] >= 200) {
				count += 4;
				unimax++;
			}
			else if (uni[i] >= 140) {
				count += 3;
				unimax++;
			}
			else if (uni[i] >= 100) {
				count += 2;
				unimax++;
			}
			else if (uni[i] >= 60) {
				count += 1;
				unimax++;
			}
			else {
				unimax++;
			}

		}
		else {
			break;
		}
	}


	printf("%d %d", sum, count);
	return 0;

}
