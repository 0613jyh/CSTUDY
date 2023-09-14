#include <stdio.h>

int main() {


	int t;
	int h, w, n;

	scanf("%d", &t);

	while (t != 0) {
		scanf("%d %d %d", &h, &w, &n);

		int count = 1;
		while (n > h)
		{
				n = n - h;
				count++;
		
		}

		if (count >= 10) {
			printf("%d%d\n", n, count);
		}
		else
		{
			printf("%d0%d\n", n, count);
		}


		t--;
	}
	return 0;
}
