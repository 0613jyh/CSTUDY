#include <stdio.h>

		int main() {
	
			int n;
			int num;
			int count = 0;
			scanf("%d", &n);
			for (int i = 0; i < n; i++) {
				scanf("%d", &num);
				for (int j = 2; j <= num; j++) {
						if (num == j) {
							count++;
						}
						if (num % j == 0) {
							break;
						}
						else {
							continue;
						}
					}				
			}
			printf("%d", count);
		return 0;
	}


		
