#include<stdio.h>
#include<stdlib.h>

struct array 
{
	int *A;
	int size;
	int length;
};

void Display(struct array *arr);
void Get(struct array *arr,int index);
void Set(struct array *arr,int index,int value);
void Max(struct array *arr);
void Min(struct array *arr);
int Sum(struct array *arr);
float Avg(struct array *arr);

void Display(struct array *arr)
{
	int i;
	printf("The elements in the arrays are: \n");
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
}

void Get(struct array *arr,int index)
{
	if(index>=0 && index<=arr->length-1)
	{
		printf("The element at given index is : %d\n",arr->A[index]);
	}
}

void Set(struct array *arr,int index,int value)
{
	if(index>=0 && index<=arr->length-1)
	{
		arr->A[index]=value;
	}
}

void Max(struct array *arr)
{
	int i,max=arr->A[0];
	for(i=0;i<arr->length;i++)
	{
		if(arr->A[i]>max)
		{
			max=arr->A[i];
		}
	}
	printf("\nThe maximum value in the array is: %d\n",max);
}

void Min(struct array *arr)
{
	int i,min=arr->A[0];
	for(i=0;i<arr->length;i++)
	{
		if(arr->A[i]<min)
		{
			min=arr->A[i];
		}
	}
	printf("The minimum value in the array is: %d\n",min);
}

int Sum(struct array *arr)
{
	int sum=0,i;
	for(i=0;i<arr->length;i++)
	{
		sum+=arr->A[i];
	}	
	return sum;
}

float Avg(struct array *arr)
{	
	 return (float)Sum(arr)/arr->length;
}


int main()
{
	struct array arr;
	int i,n,index_get,index_set,value;
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
	Display(&arr);
	printf("\nEnter the index of the array you want to display: \n");
	scanf("%d",&index_get);
	Get(&arr,index_get);
	printf("Enter the value you want to add\n");
	scanf("%d",&value);
	printf("Enter the index where you want to store: \n");
	scanf("%d",&index_set);
	Set(&arr,index_set,value);
	Display(&arr);
	Max(&arr);	
	Min(&arr);
	int sum=Sum(&arr);
	printf("The sum of the elements in the array is: %d\n",sum);
	float avg=Avg(&arr);
	printf("The average of the elements in the array is: %f",avg);

}

