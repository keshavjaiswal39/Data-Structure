#include<stdio.h>
#include<stdlib.h>


struct array
{
	int A[20];
	int size;
	int length;
};

void display(struct array *arr)
{
	int i;
	printf("The elements in the array are: \n");
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
	printf("\nThe size of the array is %d\n",arr->size);
	printf("The length of the array is %d",arr->length);
}


int main()
{
	int i,n;
	struct array arr;
	printf("Enter size of array\n");
	scanf("%d",&arr.size);
	printf("Enter total number of array you want\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length=n;
	display(&arr);
	return 0;	
}
