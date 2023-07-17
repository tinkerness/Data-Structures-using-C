#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data, coef, exp;
	struct node *next;
};

struct node *createnode(int c,int e)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->coef=c;
	newnode->exp=e;
	newnode->next=0;
	
	return newnode;
};

struct node *createpoly(int n)
{
	int c,e,i;
	struct node *head=0,*nxt,*l;
	for(i=0;i<n;i++)
	{
		printf("coeff of term %d :",i+1);
	    scanf("%d",&c);
		printf("exp of term %d :",i+1);
		scanf("%d",&e);
		
		nxt=createnode(c,e);
		if(head==0)
		{
			head=l=nxt;
		}
		else
		{
		    l->next=nxt;
		    l=nxt;
		}
	}
	return head;
};
void traversal (struct node *head)
{
	struct node *newnode;
	if(head==0)
	{
		printf("empty");
	}
	else
	{
	    
	    newnode=head;
	    while(newnode!=0)
	    {
	        printf("%dx^%d",newnode->coef,newnode->exp);
	        if(newnode->next!=0)
	        printf("+");
	        newnode=newnode->next;
	
	    }
	}
}
struct node *addpoly(struct node *h1,struct node *h2)
{
	struct node *rh=0,*newnode1,*newnode2,*n,*l;
	newnode1=h1;
	newnode2=h2;
	while(newnode1!=NULL&&newnode2!=NULL)
	{
		if(newnode1->exp > newnode2->exp)
		{
			n=createnode(newnode1->coef,newnode1->exp);
			newnode1=newnode1->next;
		}	
		else if(newnode1->exp < newnode2->exp)
		{
			n=createnode(newnode2->coef,newnode2->exp);
			newnode2=newnode2->next;
		}
		else
		{
			n=createnode((newnode1->coef+newnode2->coef),newnode1->exp);
			newnode1=newnode1->next;
			newnode2=newnode2->next;
		}
		if(rh==0)
		{
			rh=l=n;
		}
		else
		{
			l->next=n;
			l=n;
		}
	}
	while(newnode1!=NULL)
	{
		n=createnode(newnode1->coef,newnode1->exp);
		newnode1=newnode1->next;
		if(rh==NULL)
		{
			rh=l=n;
		}
		else
		{
			l->next=n;
			l=n;
		}
		}
		while(newnode2!=0)
		{
			n=createnode(newnode2->coef,newnode2->exp);
			newnode2=newnode2->next;
			if(rh==0)
			{
				rh=l=n;
			}
			else
			{
				l->next=n;
				l=n;
			}
			}
			return rh;
};

void main()
{
	int a,b,ch;
	struct node *newnode,*newnode1,*newnode2;
	printf("Enter the number of elements for the first polynomial:");
	scanf("%d",&a);
	newnode1=createpoly(a);
	printf("Enter the number of elements for the second polynomial:");
	scanf("%d",&b);
	newnode2=createpoly(b);
	
	printf("\npoly1: ");
	traversal(newnode1);
	printf("\npoly2: ");
	traversal(newnode2);
	printf("\n");
	newnode=addpoly(newnode1,newnode2);
	printf("\nSum  : ");
	traversal(newnode);
	printf("\n");
}