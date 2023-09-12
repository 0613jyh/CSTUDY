#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main() {

	char str[100] = { 0, };
	int sum;
	int num = 0;


	scanf("%d", &sum);

	scanf("%s", str);

	for (int i = 0; i < sum; i++) {

			if (str[i] - '0' != 0) {
				str[i] -= '0';
				num += str[i];			
			}
			else {
				continue;
			}


	}
	
	printf("%d", num);

	
	return 0;
}
