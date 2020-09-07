#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *A;
	int size;
	int length;
};

void linearSearch(struct array *arr,int key);
void Display(struct array *arr);

void Display(struct array *arr)
{
	int i;
	printf("The elements in the array are: \n");
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
	
}

void linearSearch(struct array *arr,int key)
{
	int i,x=0;
	for(i=0;i<arr->length;i++)
	{
	if(arr->A[i]==key)
	{
		printf("Found element %d at index %d",key,i);
		x=1;
		break;
	}  
    }
	if(x!=1)
	{
		printf("The element do not lies in the array");
	}
}

int main()
{
	int i,n,key;
	struct array arr;
	printf("Enter size of array\n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter total number of array you want\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length=n;
	Display(&arr);
	printf("\nEnter the number which you want to search: \n");
	scanf("%d",&key);
	linearSearch(&arr,key);
}
