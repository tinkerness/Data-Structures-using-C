#include <stdio.h>
#include <stdlib.h>

int choice;
struct node
{
    int data;
    struct node* next;
};
struct node* head=0;

void traverse()
{
    struct node* temp;
    if (head == 0)
        printf("\nList is empty\n");
    else {
        temp = head;
        printf("Linked List:-\n");
        while (temp != 0) {
            printf("%d\t",temp->data);
            temp = temp->next;
        }printf("\n");
    }
}

void insert_Beg()
{
    int data;
    struct node *newnode, *temp;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    temp = head;
}

void insert_End()
{
    int data;
    struct node *temp, *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insert_Pos()
{
    int pos, data, i = 1;
    struct node *temp, *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter position and data:");
    scanf("%d %d", &pos, &newnode->data);
    newnode->next = 0;
    if (newnode == 0)
    {
        printf("\n Overflow");
    }
    else
    {
        temp=head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void del_Beg()
{
    struct node* temp;
    if (head == 0)
        printf("\nList is empty\n");
    else {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void del_End()
{
    struct node *temp, *prevnode;
    if (head == 0)
        printf("\nList is Empty\n");
    else {
        temp = head;
        while (temp->next != 0) {
            prevnode = temp;
            temp = temp->next;
        }
        free(temp);
        prevnode->next = 0;
    }
}

void del_Pos()
{
    struct node *temp, *nextnode;
    int i = 1, pos;
    temp=head;
    if (head == 0)
        printf("\nList is empty\n");
    else {
        printf("\nEnter position : ");
        scanf("%d", &pos);
        
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }
}

int main()
{
    printf("LINKED LIST OPERATIONS\n\n");
    while(1)
    {
        
        printf("\n\t1  To display list\n");
        printf("\t2  For insertion at beginning\n");
        printf("\t3  For insertion at ending\n");
        printf("\t4  For insertion at any position\n");
        printf("\t5  For deletion from beginning\n");
        printf("\t6  For deletion from end\n");
        printf("\t7  For deletion of element from any position\n");
        printf("\t8 To exit\n");
        
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:traverse();
            break;
        case 2:insert_Beg();
            break;
        case 3:insert_End();
            break;
        case 4:insert_Pos();
            break;
        case 5:del_Beg();
            break;
        case 6:del_End();
            break;
        case 7:del_Pos();
            break;
        case 8:exit(1);
            break;
        default:printf("Incorrect Choice\n");
        }
    }
    return 0;
}