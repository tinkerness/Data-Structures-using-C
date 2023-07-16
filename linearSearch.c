/*
ALGORITHM
**********
1. enter array length
2. enter number x
3. using for loop, compare each element with x
4. if (A[i] == x), print 'x found at location i+1'
5. else, print 'x not found'
*/
#include <stdio.h>
int main()
{
	int i,n,x;
  // int c=0;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	// c++;
	int A[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++) {	
		// c++;
		scanf("%d",&A[i]);
	}
	printf("Enter num to search: ");
	scanf("%d",&x);
  // c++;
	
	for (i=0; i<n; i++)	{
		// c++;
		if (A[i] == x) {
			// c++;
			printf("\n'%d' found at location %d",x,i+1);
			break;
		}
	}
  // c++;
	
	if (i == n)	{
		// c++;
		printf("\nElement %d not found",x);
	}
	
	// printf("\nTime complexity is %d",c);
	// printf("\nSpace complexity is %d",(12+4*n));
	return 0;
}
