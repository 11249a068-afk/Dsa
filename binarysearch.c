//Aim: To perform aq stack operations using array

#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int x)
{
    if (top >= MAX - 1)
    {
    printf("Stack overflow\n");
    }
    else
    {
    top++;
     stack[top] = x;
    }
}
int pop()
{
    if (top < 0)
    {
    printf("Stack underflow\n");
    return -1;
    }
    else
    {
    int value = stack[top];
    top--;
    return value;
    }
}
int peek()
{
    if (top < 0)
    {
     printf("Stack is empty\n");
    return -1;
    }
    else
    {
    return stack[top];
    }
}
int empty()
{
    return top == -1;
}
void display()
{
    if (empty())
    {
     printf("Stack is empty\n");
    }
    else
    {
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--)
    printf("%d ", stack[i]);
    printf("\n");
    }
}
int main()
{
    int choice, value;
    int n;
    printf("Enter total size of stack (max %d): ", MAX);
    scanf("%d", &n);
    if (n > MAX)
    {
     printf("Size exceeds limit\n");
    return 0;
    }
    while (1)
    {
    printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnteryour choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
             case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1)
                    printf("Popped value: %d\n", value);
                break;

            case 3:
                value = peek();
                if (value != -1)
                    printf("Top value: %d\n", value);
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
