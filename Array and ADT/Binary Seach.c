#include<stdio.h>
#include<stdlib.h>

struct array 
{
	int *A;
	int size;
	int length;
};

void Display(struct array *arr);
void BinSearch(struct array *arr,int key);

void Display(struct array *arr)
{
	int i;
	printf("The element in the array are \n");
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
}

void BinSearch(struct array *arr,int key)
{
	int mid,low=0,high=arr->length-1,x=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr->A[mid]==key)
		{
			printf("Element found at index %d\n",mid);
			x=1;
			break;
		}
		else if(key<arr->A[mid])
		{
			high=mid-1;
		}
		else if(key>arr->A[mid])
		{
			low=mid+1;
		}
	}
	if(x==0)
		{
			printf("Element is not found\n");
		}
}


int main()
{
	int i,n,key;
	struct array arr;
	printf("Enter the size of the array\n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of array you want: \n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length=n;
	Display(&arr);
	printf("\nEnter the element you want to search for: \n");
	scanf("%d",&key);
	BinSearch(&arr,key);
}
