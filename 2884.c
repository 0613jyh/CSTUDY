#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int main() {

		int h, m;
		int a = 23; 
		int b = 59;
		int min = 45;
		scanf("%d %d", &h, &m);
		if (m < min) {
			
			if (h == 0) {
				h = 23;
				m = m + 60 - min;
			}
			else {
				h--;
				m = m + 60 - min;
			}
		}

		else {
			m -= min;
		}
		
		printf("%d %d", h , m);

		return 0;
	}
