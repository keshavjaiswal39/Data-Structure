#include<stdio.h>
#include<stdlib.h>

struct array 
{
	int *A;
	int size;
	int length;
};

void RevBinSearch(int A[],int low,int high,int key);
void Display(struct array arr);

void Display(struct array arr)
{
	int i;
	printf("The elements in the array are: \n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void RevBinSearch(int A[],int low,int high,int key)
{
	int mid,x=0;
	if(low<=high)
	{
		mid=(low+high)/2;
		if(key==A[mid])
		{
			printf("Element is found at index %d\n",mid);
			x=1;
		}
		else if(key<A[mid])
		{
			RevBinSearch(A,low,mid-1,key);
		}
		else
		{
			RevBinSearch(A,mid+1,high,key);
		}
	}
    else
	{
		printf("Element is not found\n");
	}
}

int main()
{
	struct array arr;
	int i,n;
	printf("Enter the size of the array: \n");
	scanf("%d",&arr.size);
	arr.A=(int*)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of array you want: \n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length=n;
	Display(arr);
	printf("\nEnter the element you want to find: \n");
	int low=0,high=arr.length-1,key;
	scanf("%d",&key);
	RevBinSearch(arr.A,0,high,key);
	
	
}
