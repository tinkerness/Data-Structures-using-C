#include <stdio.h>
int main()
{
    struct sparse
    {
        int row,column,value;
    }s[10];
    
    int r,c,i,j,a[10][10];
    
    printf("Enter order of matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter elements:");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nThe input matrix is:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
   
    int k=1,count=0;
    for (i=0;i<r;i++) {
       for (j=0;j<c;j++) {
          if (a[i][j]!=0) {
             s[k].row=i;
             s[k].column=j;
             s[k].value=a[i][j];
             k++;
             count++;
          }
       }
    }
    s[0].row=r;
    s[0].column=c;
    s[0].value=count;
    
    printf("\nThe sparse matrix is:");
    for (k=0;k<=count;k++) {
          printf("\n%d\t%d\t%d",s[k].row,s[k].column,s[k].value);
    }
    
    return 0;
}
