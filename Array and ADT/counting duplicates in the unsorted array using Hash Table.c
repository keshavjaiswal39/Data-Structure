#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int length;
	int size;
};

int Max(struct array *arr);
void countMulHash(struct array arr);


int Max(struct array *arr)
{
	int i;
	int max=arr->A[0];
	for(i=0;i<arr->length;i++)
	{
		if(arr->A[i]>max)
		{
			max=arr->A[i];
		}
	}
	return max;
}

void CountMulHash(struct array arr,int H[])
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		H[arr.A[i]]++;
	}
	for(i=0;i<Max(&arr);i++)
	{
		if(H[i]>1)
		{
			printf("%d is found %d times \n",i,H[i]);
		}
	}
}


int main()
{
	struct array arr;
	int i,n,x;
	int H[100]={0};
	printf("Enter the size of the element: \n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of element you want: \n");
	scanf("%d",&n);
	arr.length=n;
	printf("Enter the elements of the array: \n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	x=Max(&arr);
	CountMulHash(arr,H);
}
