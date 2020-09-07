#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};


void SumPair(struct array,int k);


void SumPair(struct array arr,int k)
{
	int i,j;
	for(i=0;i<arr.length;i++)
	{
		for(j=i+1;j<arr.length;j++)
		{
			if(arr.A[i]+arr.A[j]==k)
			{
				printf("(%d , %d)",arr.A[i],arr.A[j]);
			}
		}
	}
}



int main()
{
	int i,n,k;
	struct array arr;
	printf("Enter the size of the array: \n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of array you want to input: \n");
	scanf("%d",&n);
	arr.length=n;
	printf("Enter the number of elements you want in the array\n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	printf("The pair sum has to be equal to \n");
	scanf("%d",&k);
	SumPair(arr,k);
}




