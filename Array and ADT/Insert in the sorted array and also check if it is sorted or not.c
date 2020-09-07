/*   1 2 3 4 _ 6 7 8 9 10 _ _ _ _----emply index
     0 1 2 3 4 5 6 7 8 --------index 
insert 5



*/

#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

void Display(struct array arr);
void Insert(struct array *arr,int x);
int isSorted(struct array arr);

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

int isSorted(struct array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]>arr.A[i+1])
		{
			return 0;
		}
	}
	return 1;
}

void Insert(struct array *arr,int x)
{
	int i;
	if(arr->length<arr->size)
	{
	for(i=arr->length;x<arr->A[i];i--)
	{
		arr->A[i+1]=arr->A[i];
	}
	arr->A[i+1]=x;
	arr->length++;
    }
    else
    {
    	printf("The length of the array exceed the given size, please try again using greater size than the length of array. \n\n");
	}
}



int main()
{
	int i,n,x;
	struct array arr;
	printf("Enter the size of the array: \n");
	scanf("%d",&arr.size);
	arr.A=(int*)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of array you want :\n");
	scanf("%d",&n);
	arr.length=n;
	printf("Enter the elements in the array: \n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	Display(arr);
	if(isSorted(arr))
	{
	printf("Enter the number you want to add in the sorted array: \n");
	scanf("%d",&x);
	Insert(&arr,x);
	Display(arr);
    }
    else
    {
    	printf("The elements you have entered is not sorted, please enter sorted array to insert your element: \n");
	}
	
}





