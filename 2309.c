#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {

	if (*(int*)a > *(int*)b) {
		return 1;
	}

	else if ((int*)b > (int*)a) {
		return -1;
	}

	else {
		return 0; 
	}


}


int main() {

	int n[9] = { 0, };
	int sum = 0;
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]);
		sum += n[i];
	}

	for (int i = 0; i < 9; i++) {

		for (int j = i+1; j < 9; j++) {
			int count = sum;
			
			count -= n[i];
			count -= n[j];

			if (count == 100) {
				n[i] = 100;
				n[j] = 100;

				qsort(n, 9, sizeof(int), compare);

				for (int k = 0; k < 7; k++) {
					printf("%d\n", n[k]);
				}
				return 0;


			}
			
			
		}
	}




	return 0;
}
