//Implement two stacks using a single array
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top1 = -1, top2 = MAX_SIZE;

void push(int stack_num, int val) {
	if (top1 + 1 == top2) {
		printf("Overflow stack!\n");
		return;
	}
	if (stack_num == 1) {
		top1++;
		stack[top1] = val;
	} else {
		top2--;
		stack[top2] = val;
	}
}

int pop(int stack_num) {
	if (stack_num == 1) {
		if (top1 == -1) {
			printf("Empty stack!\n");
			return -1;
		}
		int val = stack[top1];
		top1--;
		return val;
	} else {
		if (top2 == MAX_SIZE) {
			printf("Stack Underflow\n");
			return -1;
		}
		int val = stack[top2];
		top2++;
		return val;
	}
}

int main() {
	push(1, 1);
	push(1, 2);
	push(1, 3);
	push(2, 10);
	push(2, 20);
	push(2, 30);
	printf("%d popped from stack 1\n", pop(1));
	printf("%d popped from stack 1\n", pop(1));
	printf("%d popped from stack 1\n", pop(1));
	printf("\n%d popped from stack 2\n", pop (2));
	printf("%d popped from stack 2\n", pop(2));
	printf("%d popped from stack 2\n", pop(2));
	return 0;
}
