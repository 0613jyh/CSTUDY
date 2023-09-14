#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {

	int a[10] = { 0, };
	int index[10] = { 0, };
	int num;
	int count = 0;
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		index[i] = a[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		num = index[i];
		if (num == -1) {
			continue;
			}
		for (int j = 0; j < 10; j++) {
		
			if (i == j) {
				continue;
			}
			else if (num == index[j]) {
				index[j] = -1;
		
			}
		}

	}
	
	for (int i = 0; i < 10; i++) {
		if (index[i] != -1) {
			count++;
		}
	}


		printf("count %d", count);
		return 0;
	}
