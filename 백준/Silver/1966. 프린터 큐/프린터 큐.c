#include<stdio.h>
#include<stdlib.h>

int prior[10];	// 우선 순위

int main() {
	int T;
	scanf("%d", &T);
	while (T) {
		int N, find, max = 0;
		scanf("%d %d", &N, &find);
		int* queue = (int*)calloc(N, sizeof(int));

		int cur = -1, cnt = 0;
		for (int i = 0; i < N; i++) {
			scanf("%d", &queue[i]);
			prior[queue[i]]++;
			if (queue[i] > max)
				max = queue[i];
		}
		while (queue[find] != -1) {
			cur++;	// 커서 한 칸 이동

			// cur가 배열의 범위를 초과하면 맨 앞으로 오도록
			cur %= N;

			// cur가 가리키는 문서가 가장 중요도 높은 문서라 제거해야 할 때
			if (queue[cur] == max) {
				cnt++;
				queue[cur] = -1;
				prior[max]--;

				// 제거한 문서의 중요도와 같은 문서가 더이상 없을 때
				if (prior[max] == 0) {
					max--;
					while (!prior[max]) {
						max--;
					}
				}
			}
		}
		printf("%d\n", cnt);
		free(queue);
		memset(prior, 0, sizeof(int) * 10);
		T--;
	}
	return 0;
}