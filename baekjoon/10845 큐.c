#include <stdio.h>
#include <string.h>
#define max 10000

int queue[max] = { 0, };
int num = 0;

void push(int sum) {
	queue[num] = sum;
	num += 1;
}

int empty() {
	if (num == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int size() {
	if (num == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

int front() {
	if (num == 0) {
		return -1;
	}
	else {
		return queue[0];
	}
}

void setting() {
	if (num > 0) {
		for (int i = 1; i < num; i++) {
			int swap;
			swap = queue[i];
			queue[i - 1] = swap;
			}
		num--;
		}
	else {
		return -1;
	}
	}

int back() {
	if (num == 0) {
		return -1;
	}
	else {
		return queue[num - 1];
	}
}

int pop() {
	if (num == 0) {
		return -1;
	}
	else {
		return queue[0];
	}
}


int main() {

	int n;
	int sum;
	scanf("%d", &n);
	char str[5] = { 0, };
	for (int i = 0; i < n; i++) {
	scanf("%s", str);


	if (!strcmp(str, "push")) {
		scanf("%d", &sum);
		push(sum);
	}
	else if (!strcmp(str, "empty")) {
		printf("%d\n", empty());
	}
	else if (!strcmp(str, "size")) {
		printf("%d\n", num);
	}
	else if (!strcmp(str, "front")) {
		printf("%d\n", front());
	}
	else if (!strcmp(str, "back")) {
		printf("%d\n", back());
	}
	else if (!strcmp(str, "pop")) {
		printf("%d\n", pop());
		setting();
	}
		
	}

	return 0;
}