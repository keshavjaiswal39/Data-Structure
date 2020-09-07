#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int length;
	int size;
};


void Missing(struct array arr)
{
	int i,low=arr.A[0];
	int diff;
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]-i!=diff)
		{
			printf("The missing element in the array is %d",i+diff);
			break;
		}
	}
}


int main()
{
    int i,n;
    struct array arr;
    printf("Enter the size of elements in the array: \n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of elements you want to imput: \n");
	scanf("%d",&n);
	arr.length=n;
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	Missing(arr);
}
