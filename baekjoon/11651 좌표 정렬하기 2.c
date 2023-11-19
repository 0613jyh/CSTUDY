#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100000

typedef struct {
	int x;
	int y;
}xy;

int compare(const void *a, const void *b) {

	xy A = *(xy*)a;
	xy B = *(xy*)b;

	if (A.y < B.y) {
		return -1;
	}
	if (A.y > B.y) {
		return 1;
	}

	else {
		if (A.x > B.x) {
			return 1;
		}
		else if (A.x < B.x) {
			return -1;
		}
	}

}


int main() {

	int n;
	scanf("%d", &n);

	xy* arr;
	arr = (xy*)malloc(sizeof(xy) * n);
	for (int i = 0; i < n;i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	qsort(arr, n, sizeof(xy), compare);
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].x, arr[i].y);
	}

	free(arr);

	return 0;
}
