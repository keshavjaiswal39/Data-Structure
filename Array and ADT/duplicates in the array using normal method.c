#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int length;
	int size;
};

void duplicates(struct array arr)
{
	int i,lastdigit=0;
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]==arr.A[i+1]  && arr.A[i]!=lastdigit)
		{
			printf("Duplicates are: %d\n",arr.A[i]);
			lastdigit=arr.A[i];
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
	duplicates(arr);
	
}
