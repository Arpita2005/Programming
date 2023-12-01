#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_SIZE 100

// Define a structure for the stack......................
struct Stack
{
    int top;               // Index of the top element in the stack
    char items[MAX_SIZE];  // Array to store stack elements
};

// Function to initialize the stack.......................
void initialize(struct Stack *stack)
{
    stack->top = -1;  // Set top index to -1, indicating an empty stack
}

// Function to push an element onto the stack.............
void push(struct Stack *stack, char value)
{
    stack->items[++stack->top] = value;  // Increment top index and store value in stack
}

// Function to pop an element from the stack..............
char pop(struct Stack *stack)
{
    return stack->items[stack->top--];  // Return the value and decrement top index
}

// Determine the precedence of an operator..............
int precedence(char op)
{
    // Return precedence 1 for + and - operators, precedence 2 for * and / operators, else 0
    return (op == '+' || op == '-') ? 1 : (op == '*' || op == '/') ? 2 : 0;
}

// Convert infix expression to postfix................
void infixToPostfix(const char *infix, char *postfix)
{
    struct Stack stack;
    initialize(&stack);  // Initialize the stack
    int i = 0, j = 0;    // Loop indices for infix and postfix expressions

    while (infix[i])
    {
        char ch = infix[i];  // Get the current character from infix
        if (isdigit(ch) || isalpha(ch)) // If the character is a digit or an alphabet, add it directly to postfix
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(&stack, ch);  // Push '(' onto the stack
        }
        else if (ch == ')') // Pop operators from the stack and add to postfix until '(' is encountered
        {
            while (stack.items[stack.top] != '(')
            {
                postfix[j++] = pop(&stack);
            pop(&stack);  // Pop '(' from the stack
            }
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            // Pop operators with higher precedence and add to postfix
            while (stack.top != -1 && precedence(stack.items[stack.top]) >= precedence(ch))
                postfix[j++] = pop(&stack);
            push(&stack, ch);  // Push the current operator onto the stack
        }
        i++;  // Move to the next character in the infix expression
    }
    // Pop any remaining operators from the stack and add to postfix
    while (stack.top != -1)
        postfix[j++] = pop(&stack);
    postfix[j] = '\0';  // Null-terminate the postfix expression
}
int main()
{
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    printf("Enter infix expression: ");
    scanf("%s", infix);     // Read input infix expression from the user
    infixToPostfix(infix, postfix);  // Convert infix to postfix
    printf("Postfix expression: %s\n", postfix);  // Display the postfix expression
    return 0;
}
