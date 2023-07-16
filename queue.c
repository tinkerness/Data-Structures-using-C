#include <stdio.h>

void Enqueue();
void Dequeue();
void display();

int queue[50],size;
int rear = -1;
int front = -1;

int main()
{
    int choice;
    printf("Enter the size : ");
    scanf("%d", &size);
    while (1)
    {
        printf ("\n* * * * * * *\n");
        printf("1.Enqueue\t-->Insert element\n");
        printf("2.Dequeue\t-->Delete element\n");
        printf("3.Display\t-->Display all elements\n");
        printf("4.Exit \n");
        printf ("* * * * * * *\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            Enqueue();
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            return 0;
            default:
            printf("Wrong choice \n");
        }
    }
}
 
void Enqueue()
{  
    int item;
    if (rear == size -1)
    printf("**\tQueue Overflow\t**\n");
    else
    {
        if (front == -1)
        front = 0;
        printf("Enter the value to insert: ");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
}
 
void Dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("**\tQueue Underflow\t**\n");
        return;
    }
    else
    {
        printf("Element dequeued is : %d\n", queue[front]);
        front = front + 1;
    }
}
 
void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} 
