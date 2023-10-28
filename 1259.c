#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	char str[5] = { 0, };

	while (1) {
		scanf("%s", str);
		
		if (str[0] == '0') {
			break;
		}
		int len = strlen(str);
		int arr = len - 1;
		int count = len / 2;
		int flag = 0;
		for (int i = 0; i < count; i++) {

			if (str[i] == str[arr]) {
				flag++;
				arr--;
			}
			else {
				continue;
			}
		}

		if (flag >= count) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
}
