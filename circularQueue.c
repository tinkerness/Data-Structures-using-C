#include <stdio.h>

void Enqueue();
void Dequeue();
void display();

int cq[50],size;
int rear = -1;
int front = -1;

int main()
{
    int choice;
    printf("Enter the size : ");
    scanf("%d", &size);
    while (1)
    {
        printf ("\n\n* * * * * * *\n");
        printf("1.Enqueue\t-->  Insert element\n");
        printf("2.Dequeue\t-->  Delete element\n");
        printf("3.Display\t-->  Display all elements\n");
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
    if ((front == 0 && rear == size -1) || (front == rear + 1))
    printf("\t* *\tO V E R F L O W\t* *\n");
    else
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear+1)%size;
        }
        printf("Enter the value to insert: ");
        scanf("%d", &item);
        cq[rear] = item;
    }
}
 
void Dequeue()
{
    if (front == -1)
    {
        printf("\t* *\tU N D E R F L O W\t* *\n");
        return;
    }
    else
    {
        int data = cq[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front+1)%size;
        }
        printf("Element dequeued is : %d\n", data);
    }
}
 
void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        printf("The Circular Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", cq[i]);
        printf("\n");
    }
} 
