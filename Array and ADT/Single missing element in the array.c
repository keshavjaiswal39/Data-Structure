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
	int i,sum=0,nsum=0,value;
	for(i=0;i<arr.length;i++)
	{
		sum+=arr.A[i];
	}
	nsum=((arr.length)*(arr.length+1)+1)/2;
	value=sum-nsum;
	printf("The missing element in the array is : %d",value);
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
