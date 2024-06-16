// Nicole Mena Porras C14663
// codigo del stack.c
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}




void push(Stack* stack, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = stack->top;
    newNode->prev = NULL;
    if (stack->top != NULL) {
        stack->top->prev = newNode;
    }
    stack->top = newNode;
}




int pop(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    if (stack->top != NULL) {
        stack->top->prev = NULL;
    }
    free(temp);
    return data;
}




int peek(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack->top->data;
}




int isEmpty(Stack* stack) {
    return stack->top == NULL;
}




void freeStack(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
    free(stack);
}
// fin del codigo de stack.c, gracias...
