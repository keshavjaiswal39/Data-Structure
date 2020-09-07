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
	diff=low-0;
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]-i!=diff)
		{
			while(diff<arr.A[i]-i)
			{
				printf("The missing element in the array is %d\n",i+diff);
			    diff++;
			}
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
	printf("Enter the elements you want to input in the array: \n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	Missing(arr);
}
