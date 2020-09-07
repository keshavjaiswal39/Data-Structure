#include<stdio.h>
#include<stdlib.h>


struct array
{
	int *A;
	int size;
	int length;
};

void delete(struct array *arr,int index);
void display(struct array *arr);

void display(struct array *arr)
{
	int i;
	printf("The elements in the array are: \n");
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
	printf("\nThe size of the array is %d\n",arr->size);
	printf("The length of the array is %d\n\n",arr->length);
}

void delete(struct array *arr,int index)     //x is the value that we want to insert
{
	int i,x;
	if(arr->length<arr->size)
	{
	if(index>=0 && index<=arr->length)
	{
		x=arr->A[index];
		for(i=index;i<arr->length-1;i++)
		{
			arr->A[i]=arr->A[i+1];
		}
		arr->length--;
	}
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
	printf("\nThe size of the array is %d\n",arr->size);
	printf("The new length of the array is %d\n",arr->length);
    }
    else
    {
    	printf("You cannot delete any elements as your given index is not valid. Please enter a valid index:-)\n\n");
	}
}

int main()
{
	int i,n,index;
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
	display(&arr);
	printf("Enter the index to be deleted: \n");
	scanf("%d",&index);
	delete(&arr,index);
	return 0;	
}
