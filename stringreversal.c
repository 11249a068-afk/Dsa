#include <stdio.h>
#include <string.h>

int top = -1;
char stack[50];

void push(char item) {
    if (top == 49) {   
        printf("Stack overflow! Cannot push '%c'.\n", item);
    } else {
        stack[++top] = item;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        return '\0';
    } else {
        return stack[top--];
    }
}

int main() {
    char input[50];

    printf("Enter a string to reverse (max 49 characters): ");
    scanf("%s", input);   

    int size = strlen(input);   
    for (int i = 0; i < size; i++) {
        push(input[i]);
    }

    printf("\nReversed string is: ");
    for (int i = 0; i < size; i++) {
        printf("%c", pop());
    }

    printf("\n");
    return 0;
}

