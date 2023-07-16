#include <stdio.h>
#define SIZE 5
 
struct stack
{
    int stk[SIZE];
    int top;
};

typedef struct stack STACK;
STACK s;
 
void push(void);
int pop(void);
void display(void);
int peek(void);

int main ()
{
    int choice;
    int option = 1;
    s.top = -1;
 
    printf ("STACK OPERATION\n");
    while (1)
    {
        printf ("------------------------------------------\n");
        printf ("1\tPUSH\t-->Insertion\n");
        printf ("2\tPOP\t-->Deletion\n");
        printf ("3\tDISPLAY\t-->Display elements\n");
        printf ("4\tPEEK\t-->View topmost element\n");
        printf ("5\tEXIT\n");
        printf ("------------------------------------------\n");
 
        printf ("\nEnter required operation:");
        scanf ("%d", &choice);
        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                return 0;
            default:
                printf("Wrong choice \n");
        }
    }
    return 0;
}

/*  Function to insert an element into the stack */
void push ()
{
    int num;
    if (s.top == (SIZE - 1))
    {
        printf ("Stack is Full!!\nSTACK OVERFLOW\n");
        return;
    }
    else
    {
        printf ("Enter the element to push");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}

/*  Function to delete an element from the stack */
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty!!\nSTACK UNDERFLOW\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("poped element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}

void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty!!\nSTACK UNDERFLOW\n");
        return;
    }
    else
    {
        printf ("\n The stack is:\n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}

int peek()
{
    printf("\nElement in the top is: %d\n",s.top);
}
