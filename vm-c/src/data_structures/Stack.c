#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void push(StackNode **top, int val){

    StackNode *newNode = (StackNode *)malloc(sizeof(StackNode)); // create new node

    if(!newNode){
        printf("Couldn't malloc for new Node\n");
        return;
    }
    
    // add new node into stack
    newNode->data = val;
    newNode->next = *top;
    *top = newNode;

}


int pop(StackNode **top){
    if(*top==NULL){
        printf("Stack UnderFlow\n");
        return -1;
    }
    StackNode *temp = *top;
    int value = temp->data;
    *top = (*top)->next;

    free(temp);
    return value;
}

int peek(StackNode *top){
    if(top == NULL) {
        printf("Stack is Empty\n");
        return -1; 
    }
    else{
        return top->data;
    }
}

int isEmpty(StackNode *top){
    return top == NULL;
}

int *return_top_two(StackNode *top){
    int result[2];
    result[0] = top->data;
    result[1] = top->next->data;

    return result;
}




