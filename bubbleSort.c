#include <stdio.h>
int main()
{
	int i,j,A[10],n,swap;
// 	int c=0,sp;

	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++) {
		scanf("%d",&A[i]);
// 		c++;
	}
	
	for(i=0;i<n;i++) {
// 		c++;
		for(j=0;j<n-1;j++) {
// 			c++;
			if (A[j] > A[j+1]) {
				swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
				// c+=3;
			}
		}
	}
// 	c++;

	printf("\nSorted list is:\n");
	for(i=0;i<n;i++) {
	   // c++;
		printf("%d\t",A[i]);
	}
	
// 	printf("\nTime complexity is %d",c);
// 	printf("\nSpace complexity is %d",(12+4*n));
	return 0;
}
