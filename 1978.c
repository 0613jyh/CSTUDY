#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define max 100

	int main() {
	
		int number;
		int num[max] = { 0, }; // 입력받는값
		int sum[1000] = { 0, }; // 에라토스테네스의 체로 소수판별해주는 배열
		int count = 0; // 소수몇개표시
		int maxindex = 0; // 최대값확인

		scanf("%d", &number);

		for (int i = 0; i < number; i++) {
			scanf("%d", &num[i]);
		}

		for (int i = 0; i < number; i++) { // 입력받은 배열 최대값확인하는 반복문
			if (maxindex < num[i]) {
				maxindex = num[i]; // 최대값 확인 (범위설정)
			}
			else {
				continue;
			}
		}

		for (int i = 2; i <= maxindex; i++) { // 최대(maxindex)값으로 범위지정한 것들중 소수찾는반복문	
			for (int j = i * i; j <= maxindex; j += i)
			{
				if (sum[j] == 0) {
					sum[j]++; // 소수가 아니므로 배열안의 값을 1 증가
				}
			}
		}

		for (int i = 0; i < number; i++) { // 사용자에게서 입력받은 num값을 소수인지 아닌지 확인하는 반복문
			
			if (num[i] == 1) {
				continue;
			}
			else {
				int n = num[i];

				if (sum[n] == 0) {
					count++; // sum[n]이 0인경우 소수이니, 소수개수확인
				}
			}
		}
		printf("%d", count);

		return 0;
	}


*/
당연히 시간초과날거같긴한데 아니 내 생각이 블로그글에 비슷하게 있네?;머지이거해도되는건가

배열 2개를 생성 후 하나는 입력받는 배열(num), 
배열 중 max(예시로 100으로 입력받으면, 100으로값)을 찾아서 
max값의 범위만큼 에라토스테네스의 체로 걸러낸다음
해당 되는 값을 ++ 해주면 되지 않을까?


에라토스테네스의 체(sum)로 걸러낸 배열의 기본 초기화는 0,
배열의 max값이 100이니 (2,3,5,7)배수들은 차례대로 1해주기

100, 97, 88, 42, 37을 입력받았을 때 들어가는 배열은 num(사용자입력값)

/*
