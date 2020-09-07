#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

void Display(struct array arr);
void Rarrange(struct array *arr);
void swap(int *p,int*q);

void Display(struct array arr)
{
	int i;
	printf("The elements in the array are: \n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}

void swap(int *p,int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

void Rarrange(struct array *arr)
{
	int i=0,j=arr->length-1;
	while(i<j)
	{
		while(arr->A[i]<0)
		{
			i++;
		}
		while(arr->A[j]>=0)
		{
			j--;
		}
		if(i<j)
		{
			swap(&arr->A[i],&arr->A[j]);
		}
	}
}





int main()
{
	int i,n;
	struct array arr;
	printf("Enter the size of the array: \n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of elements you want in the array: \n");
	scanf("%d",&n);
	arr.length=n;
	printf("Enter the elements int the array: \n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	Display(arr);
	Rarrange(&arr);
	Display(arr);
}
