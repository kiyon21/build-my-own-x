#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode {
	int data;
	struct StackNode *next;
} StackNode;

void push(StackNode **top, int val); // push onto stack
int pop(StackNode **top); // pop from stack
int peek(StackNode *top); // peek top of stack
int isEmpty(StackNode *top); // check if stack is empty
int *return_top_two(StackNode *top); // returns last two values pushed onto stack

