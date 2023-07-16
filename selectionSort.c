#include <stdio.h>
int main()
{
	int i,j,n,min,swap;
// 	int c=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
// 	c++;
	int A[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]);
// 		c++;
	}
	for(i=0;i<(n-1);i++) {
// 		c++;
		min=i;
		for(j=(i+1);j<n;j++) {
// 			c++;
			if (A[j] < A[min]) {
				// c++;
				min=j;
			}
// 			c++;	
		}
// 		c++;
		
		if (min != i) {
			swap = A[i];
			A[i] = A[min];
			A[min] = swap;
// 			c+=3;
		}
// 		c++;
	}
// 	c++;

	printf("\nSorted array is:\n");
	for(i=0;i<n;i++) {
	   // c++;
		printf("%d\t",A[i]);
	}
// 	printf("\nTime complexity is %d",c);
// 	printf("\nSpace complexity is %d",(20+4*n));
	return 0;
}
