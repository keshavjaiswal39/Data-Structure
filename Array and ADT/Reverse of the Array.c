#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

void Display(struct array arr);
void Rev1(struct array *arr);
void Rev1(struct array *arr);
void swap(int *p,int *q);

void Display(struct array arr)
{
	int i;
	printf("The elements in the array are: \n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void Rev1(struct array *arr)
{
	int i,j;
	int *B;
	B=(int*)malloc(arr->size*sizeof(int));
	for(i=arr->length-1,j=0;i>=0,j<arr->size;i--,j++)
	{
		B[j]=arr->A[i];
	}
	for(i=0;i<arr->size;i++)
	{
		arr->A[i]=B[i];
	}
	printf("\nThe reversed elements in the array are: \n");
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
}

void Rev2(struct array *arr)
{
	int i,j;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		swap(&arr->A[i],&arr->A[j]);
	}
	printf("\nThe reversed elements in the array are: \n");
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
	
}

void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	struct array arr;
	int i,n;
	printf("Enter the size of the array: \n");
	scanf("%d",&arr.size);
	arr.A=(int*)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of element you want: \n");
	scanf("%d",&n);
	arr.length=n;
	printf("Enter the elements of the array: \n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	Display(arr);
	Rev1(&arr);
	Rev2(&arr);
}
