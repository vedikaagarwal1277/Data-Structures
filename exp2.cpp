#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push();
void pop();
void peek();
void display();

int main()
{
    int choice;

    while(1)
    {
        printf("\n  STACK MENU   \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

void push()
{
    int item;

    if(top == MAX - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &item);

    top++;
    stack[top] = item;

    printf("%d pushed successfully.\n", item);
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }

    printf("Popped element: %d\n", stack[top]);
    top--;
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        printf("Top element = %d\n", stack[top]);
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        printf("\nStack Elements:\n");

        for(i = top; i >= 0; i--)
        {
            if(i == top)
                printf("| %d | <- TOP\n", stack[i]);
            else
                printf("| %d |\n", stack[i]);
        }
    }
}
