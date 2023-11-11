#include <stdio.h>

int factorial(int number) {

	if (number <= 1) {
		return 1;
	}
	else {
		return number * factorial(number - 1);
	}
}



int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int sum = factorial(n);
	int sum1 = factorial(k);
	int sum2 = factorial(n - k);
	int num = sum / (sum1 *sum2);
	printf("%d", num);
}