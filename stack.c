#include <stdio.h>

int main() 
{
    int max, choice, item, top = -1;
    
    printf("Enter the size of stack: ");
    scanf("%d", &max);

    int stack[max];

    while (1) 
    {
        printf("\n1. Push\n2. Pop\n3. Exit\n");
        printf("Choose the operation to be done: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                if (top == max - 1) {
                    printf("Stack is overflow!\n");
                } 
                else {
                    printf("Enter the element to be pushed: ");
                    scanf("%d", &item);
                    top++;
                    stack[top] = item;
                    printf("Item %d has been pushed into the stack.\n", item);
                }
                break;

            case 2:
                if (top == -1) {
                    printf("Stack is underflow!\n");
                } 
                else {
                    item = stack[top];
                    top--;
                    printf("Item %d has been popped out of the stack.\n", item);
                }
                break;

            case 3:
                printf("Exiting the stack program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}


