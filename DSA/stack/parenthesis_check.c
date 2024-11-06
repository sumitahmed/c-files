#include <stdio.h>
#include <string.h>
#define MAX 10

int top = -1;
int stk[MAX];

void push(char c);
char pop();

int main() {
    char exp[MAX], temp;
    int i, flag = 1;

    printf("Enter an expression: ");
    fgets(exp, MAX, stdin);

    // Remove newline character if fgets captures it
    exp[strcspn(exp, "\n")] = '\0';

    for (i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);

        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (top == -1) {
                flag = 0;
                break;
            } else {
                temp = pop();
                if ((exp[i] == ')' && (temp == '{' || temp == '[')) ||
                    (exp[i] == '}' && (temp == '(' || temp == '[')) ||
                    (exp[i] == ']' && (temp == '(' || temp == '{'))) {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (top >= 0) // Remaining unmatched opening brackets
        flag = 0;

    if (flag == 1)
        printf("\nValid expression");
    else
        printf("\nInvalid expression");

    return 0;
}

void push(char c) {
    if (top == (MAX - 1))
        printf("Stack Overflow\n");
    else {
        top = top + 1;
        stk[top] = c;
    }
}

char pop() {
    if (top == -1) {
        printf("\nStack Underflow");
        return '\0'; // Return null character in case of underflow
    } else
        return (stk[top--]);
}
