#include <stdio.h>
#include <ctype.h>

int stack[20];
int top = -1;

void push(char c) {
    if (top < 19) {
        stack[++top] = c;
    }
}

char pop() {
    if (top != -1) {
        return stack[top--];
    }
    return '\0';
}

int priority(char c) {
    if (c == '^') {
        return 3;
    }
    if (c == '*' || c == '/') {
        return 2;
    }
    if (c == '+' || c == '-') {
        return 1;
    }
    if (c == '(') {
        return 0;
    }
    return -1;
}

int main() {
    char exp[20];
    char *e, x;

    printf("Enter the expression: ");
    scanf("%s", exp);
    e = exp;

    while (*e != '\0') {
        if (isalnum(*e)) {
            printf("%c", *e);
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while ((x = pop()) != '(' && x != '\0') {
                printf("%c", x);
            }
        } else {
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }

    while (top != -1) {
        printf("%c", pop());
    }

    printf("\n");
    return 0;
}

