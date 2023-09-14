#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int main() {


		int num[9] = { 0, };
		int max = num[0];
		int index;

		for (int i = 0; i < 9; i++) {

			scanf("%d", &num[i]);
		}

		for (int i = 0; i < 9; i++) {
			
			if (max < num[i]) {
				index = i;
				max = num[i];
			}
			else {
				continue;
			}
		}

		printf("%d %d", num[index], index+1);

		return 0;
	}
