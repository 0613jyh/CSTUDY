	#include <stdio.h>
	#include <stdlib.h>


	int main() {

		int n;
		int num[10001] = { 0, };
		int sum;
		scanf("%d", &n);

		
		for (int i = 0; i < n; i++) {
			scanf("%d", &sum);
			num[sum] = num[sum] + 1;
		}


		for (int i = 0; i < 10001; i++) {
			for (int j = 1; j <= num[i]; j++) {
				printf("%d\n", i);
			}
		}
		return 0;
	}
