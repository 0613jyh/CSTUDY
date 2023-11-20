#include <stdio.h>
#include <string.h>
#define max 10000

int stack[max] = { 0, };
int num = 0;

void push(int sum) {
	stack[num] = sum;
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

int top() {
	if (num > 0) {
		return stack[num - 1];
	}
	else {
		return -1;
	}
}


int pop() {
	if (num == 0) {
		return -1;
	}
	else {
		return stack[num-1];
	}
}

int setting() {
	if (num < 0) {
		stack[0] = 0;
		num = 0;
	}
	else {
		return -1;
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
		else if (!strcmp(str, "top")) {
			printf("%d\n", top());
		}
		else if (!strcmp(str, "pop")) {
			printf("%d\n", pop());
			num--;
			setting();
		}

	}

	return 0;
}