#include <stdio.h>

int main() {

	int num;
	int sum;


	scanf("%d", &num);

	for (int i = 1; i <= num; i++){ // 최대반복횟수(줄바꿈)

		sum = num - i;
		while(sum != 0)
		{
			printf(" ");
			sum--;
		}
		for (int j = 1; j <= i; j++) { // 얘 별찍기
			printf("*");
		}
		
		printf("\n");
	
	}

	return 0;
}
