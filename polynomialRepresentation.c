#include <stdio.h>
int main()
{
    int i,j,n;
    
    struct poly
    {
        int coef,exp;
    }x[10];
    
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    
    printf("Enter the coeficients and exponants:\n");
    for(i=0; i<n; i++) {
        scanf("%d",&x[i].coef);
        scanf("%d",&x[i].exp);
    }
    printf("The polynomial representation is :\n");
   
    for(i=0; i<n-1; i++) {
        printf("%dx^%d+",x[i].coef,x[i].exp);
    }
    printf("%dx^%d",x[n-1].coef,x[n-1].exp);
    
    return 0;
}
