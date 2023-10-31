#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char str[18] = { 0, };
	char ch;
	int testcase;

	scanf("%d", &testcase);
	ch = getchar();

	while (testcase != 0) {

		scanf("%[^\n]s", str);
		int len = strlen(str); // 문자열 갯수알기
		
		for (int q = 0; q < len; q++) {
			if (str[q] >= 65 && str[q] <= 90) {
				str[q] += (int)32;
			}
			else {
				continue;
			}
		}

		int point = len / 2; // 반나눠주기
		int count = len - 1;
		int flag = 1;
		for (int j = 0; j <= point; j++) {
			if (str[count] != str[j]) {
				flag = 0;
				count--;
			}
			else {
				count--;
			}
		}

		if (flag == 0) {
			printf("No\n");
			testcase--;
			ch = getchar();
		}
		else {
			printf("Yes\n");
			testcase--;
			ch = getchar();
		}

	}
	return 0;
}