/*
ALGORITHM
*********
1. input the sorted array and number
2. declare first=0, last=n-1, mid=(first+last)/2
3. check if x>a[mid] || x=a[mid] || x<a[mid]
*/

#include <stdio.h>
int main()
{
	int i,n,x,first,last,mid;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int A[n];
	
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++) {	
	    scanf("%d",&A[i]);		
	}
	
	printf("Enter num to search:");
	scanf("%d",&x);
	
	first = 0;
	last = n-1;
	mid = (first + last)/2;
	
	while (first <= last) {
	    mid = (first+last)/2;
	    
		if (A[mid] < x)	{
			first = mid+1;
		}
		else if (A[mid] == x) {
			printf("\nElement %d found at location %d",x,mid+1);
			break;
		}
		else {
			last = mid-1;
		}
	}
	
	if (last < first) {
		printf("\nElement %d not found !!",x);
	}
	return 0;
}
