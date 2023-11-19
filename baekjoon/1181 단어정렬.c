#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20000

char str[max][51];

int compare(const char* a, const char* b) {

	if (strlen((int*)a) < strlen((int*)b)) {
		return -1;
	}
	else if (strlen((int*)a) > strlen((int*)b)) {
		return 1;
	}

	else {
		return strcmp(a, b);
	}
}


int main() {

	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s", &str[i]);
	}

	qsort(str, n, sizeof(str[0]), compare);

	

	for (int i = 0; i < n; i++) {	
		if (strcmp(str[i+1], str[i]) != 0) {
			printf("%s\n", str[i]);
		}
	}
	return 0;
}
