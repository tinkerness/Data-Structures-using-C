#include <stdio.h>
#include <ctype.h>
char stack[100];
int top=-1;

void push (char item) {
    if (top >= 99) {
        printf ("STACK OVERFLOW !\n");
    }
    else{
        stack[++top] = item;
    }
}

char pop () {
    if (top == - 1) {
        printf ("STACK UNDERFLOW\n");
    }
    else {
        char item = stack[top];
        top--;
        return(item);
    }
}

int prio(char x)
{
    if (x == '^')
        return 3;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return 0;
    
}

void inToPost(char infix[]) {
    char postfix[100], ch, item;
    int i=0,j=0;
    push('#');
    while ((ch = infix[i++]) != '\0')
    {
        if (ch =='('){
            push(ch);
        }
        else if (isalnum(ch)){
            postfix[j++] = ch;
        }
        else if (ch ==')')
        {
            while(stack[top] != '('){
                postfix[j++] = pop();
            }
            item = pop();        
        }
        else
        {
            while(prio(stack[top]) >= prio(ch)){
                postfix[j++] = pop();
            }
            push(ch);        
        }
    }
    while (stack[top] != '#'){
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    printf("\nThe Postfix expresion is:%s",postfix);
}

void main()
{
    char infix[100],postfix[100];
    printf("Enter the infix expression:\n");
    scanf("%s",infix);
    inToPost(infix);
    printf("\n");
}
