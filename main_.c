// Nicole Mena Porras C14663
// codigo del main 
#include <stdio.h>
#include "stack.h"
int main() {
    Stack* stack = createStack();
    printf("Pushing 10\n");
    push(stack, 10);
    printf("Top element is %d\n", peek(stack));
    printf("Pushing 20\n");
    push(stack, 20);
    printf("Top element is %d\n", peek(stack));
    printf("Pushing 30\n");
    push(stack, 30);
    printf("Top element is %d\n", peek(stack));
    printf("Popping element %d\n", pop(stack));
    printf("Top element is now %d\n", peek(stack));
    printf("Popping element %d\n", pop(stack));
    printf("Top element is now %d\n", peek(stack));
    printf("Popping element %d\n", pop(stack));
    printf("Stack is now empty: %d\n", isEmpty(stack));
    freeStack(stack);

    return 0;
}
// fin del codigo, gracias...
