#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char array[MAX_SIZE][2];
};

void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, char item[2]) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack is full, cannot push.\n");
        return;
    }
    stack->top++;
    strcpy(stack->array[stack->top], item);
}

void pop(struct Stack* stack, char result[2]) {
    if (isEmpty(stack)) {
        printf("Stack is empty, cannot pop.\n");
        return;
    }
    strcpy(result, stack->array[stack->top]);
    stack->top--;
}

bool isOperator(char x) {
    return (x == '+' || x == '-' || x == '*' || x == '/');
}

void preToPost(char pre_exp[]) {
    struct Stack stack;
    initializeStack(&stack);

    int length = strlen(pre_exp);

    for (int i = length - 1; i >= 0; i--) {
        if (isOperator(pre_exp[i])) {
            char op1[2], op2[2], temp[3];
            pop(&stack, op1);
            pop(&stack, op2);

            temp[0] = op1[0];
            temp[1] = op2[0];
            temp[2] = pre_exp[i];
            temp[3] = '\0';

            push(&stack, temp);
        } else {
            char operand[2];
            operand[0] = pre_exp[i];
            operand[1] = '\0';
            push(&stack, operand);
        }
    }

    char result[2];
    pop(&stack, result);
    printf("Postfix : %s\n", result);
}

int main() {
    char pre_exp[] = "*-A/BC-/AKL";
    preToPost(pre_exp);

    return 0;
}
