#include <stdio.h>
int main()
{
	int A[10],n,B[10],m,i,C[20],j,k=0,l;
	printf("Enter the number of elements in A set\n");
	scanf("%d",&n);
    printf("Enter the number of elements in B set\n");
	scanf("%d",&m);
	printf("Enter the elements of A set \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
    printf("Enter the elements of B set \n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&B[i]);
	}
	printf("After union \n");
	for(i=0;i<n;i++)
	{
		C[k]=A[i];
		k++;
	}
	for(i=0;i<m;i++)
	{
		l=0;
		for(j=0;j<n;j++)
		{
			if(C[j]==B[i])
			{
				l++;
				break;
	     	}
	     }
	     if(l==0)
	     {
	        C[k]=B[i];
		    k++;
		 }
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",C[i]);
	}
	return 0;
}
