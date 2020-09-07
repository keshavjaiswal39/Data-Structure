#include<stdio.h>
#include<stdlib.h>


struct array
{
	int *A;
	int size;
	int length;
};

void append(struct array *arr,int x);
void display(struct array *arr);
void insert(struct array *arr, int index, int x);

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

void append(struct array *arr,int x)     //x is the value that we want to insert
{
	int i;
	if(arr->length<arr->size)
	{
		arr->A[arr->length]=x;
		arr->length++;
		printf("The elements after appending in the array are: \n");
		for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
	printf("\nThe size of the array is %d\n",arr->size);
	printf("The new length of the array is %d\n\n",arr->length);
	}
	else 
	{
		printf("You cannot append any elements as your length of the array is full. Please enter size of array greater than the length of array:-)\n\n");
	}
}

void insert(struct array *arr, int index, int x)
{
	int i;
	if(arr->length<arr->size)
	{
	if(index>=0 && index<=arr->length)
	{
		for(i=arr->length;i>index;i--)
		{
			arr->A[i]=arr->A[i-1];
		}
		arr->A[index]=x;
		arr->length++;
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
    	printf("You cannot insert any elements as your length of the array is full or the given index is not valid. Please enter size of array greater than the length of array:-)\n\n");
	}
}

int main()
{
	int i,n,x,y,index;
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
	printf("Enter the number to be appended: \n");
	scanf("%d",&x);
	append(&arr,x);
	printf("Enter the number to be inserted: \n");
	scanf("%d",&y);
	printf("Enter the index where the number has to be inserted: \n");
	scanf("%d",&index);
	insert(&arr,index,y);
	return 0;	
}
