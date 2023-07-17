#include<stdio.h>

void insert(int arr[])
{
    if (arr[1]==-1)
    {
        printf("enter the root value : ");
        scanf("%d",&arr[1]);
        printf("Root successfully inserted!\n");
    }
    else
    {
        int i;
        printf("Enter parent node : ");
        scanf("%d",&i);
        
        if(arr[i] == -1)
            printf("parent doesn't exist.\n");

        else
        {
            printf("Left Child(L) or Right Child(R)? ");
            char s,ch;
            scanf("%c%c",&s,&ch);

            if (ch=='l' || ch=='L')
            {
                if(arr[2*i] == -1)
                {
                    printf("enter node value : ");
                    scanf("%d",&arr[2*i]);
                    printf("node successfully inserted!\n");
                }
                else
                {
                    printf("node exists already.\n");
                }
            }

            else if (ch=='r' || ch=='R')
            {
                if(arr[(2*i)+1] == -1)
                {
                    printf("enter node value : ");
                    scanf("%d",&arr[(2*i)+1]);
                    printf("node successfully inserted!\n");
                }
                else
                {
                    printf("node exists already.\n");
                }
            }
            else
            {
                printf("invalid input !\n");
            }
        }

    }
}

void display(int arr[])
{
    if(arr[1] == -1)
    {
        printf("tree is empty.\n");
    }
    else
    {
        for (int i=1;i<10; i++)
        {
            if (arr[i] != -1)
            {
                printf("%d ",arr[i]);
            }
        }
        printf("\n");
    }

}

int main()
{
    int arr[10]={[0 ... 9] = -1};
    printf("\n----- Binary Tree -----\n");
    int choice;
    while (choice != 3)
    {
        printf("\n***** MENU *****\n");
        printf("1.Insert\n2.Display\n3.Exit\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1: insert(arr);
                break;
            case 2: display(arr);
                break;
            case 3: printf("Thank you !\n");
	return 0;
                break;
            default: printf("Invalid Choice!\n");
                break;
        }
    }
    return 0;
}
