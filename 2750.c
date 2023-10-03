#include <stdio.h>
#define max 1001


int main() {

	int n;
	int sum;
	int num[max] = { 0, };
	int min = 0;
	int minindex = num[0];
	int temp = 0;

	scanf("%d", &n);

	for (int i = 0;i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i <  n; i++) {
		for (int j = i+1; j < n; j++) {
			if (num[i] > num[j]) {
 
				min = num[i];
				num[i] = num[j];
				num[j] = min;
				
		
			}
		}
	}

    for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

		return 0;
	}
