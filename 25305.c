#include <stdio.h>
#include <stdlib.h>
#define max 1001

int compare(const void* a, const void* b) {

	if (*(int*)a < *(int*)b) {
		return 1;
	}

	else if ((int*)b < (int*)a) {
		return -1;
	}

	else {
		return 0; 
	}


}



int main() {

	int n[max] = { 0, };
	int testcase, x;
	scanf("%d %d", &testcase, &x);
	for (int i = 0; i < testcase; i++) {
		scanf("%d", &n[i]);
	}
	
	qsort(n, testcase, sizeof(int), compare);
	printf("%d", n[x-1]);

	return 0;
}
