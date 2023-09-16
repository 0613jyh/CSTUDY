#include <stdio.h>
#include <string.h>
#define max 1000000


int main() {
	
	char str[max];
	scanf("%[^\n]s", str);
	int count = 0;
	
	for (int i = 0; i <= strlen(str); i++) {
	
		if (str[i] == ' ') {
			count++;
		}
	}
	
	if (str[0] == ' ') {
		count--;
	}
	if (str[strlen(str) - 1] == ' ') {
		count--;
	}
	printf("%d", count + 1);
		return 0;
	}
