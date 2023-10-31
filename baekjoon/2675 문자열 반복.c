#include <stdio.h>
#include <string.h>
#define max 20

int main() {
	int r = 0;
	int testcase;
	char s[max] = { 0, };

	scanf("%d", &testcase);
	
	while (testcase != 0) {
		scanf("%d", &r);
		scanf("%s", s);
		
		for (int i = 0; i < strlen(s); i++) {
				for (int j = 0; j < r; j++) {
					printf("%c", s[i]);
				}
			}
		printf("\n");
		testcase--;

	}

	return 0;
}