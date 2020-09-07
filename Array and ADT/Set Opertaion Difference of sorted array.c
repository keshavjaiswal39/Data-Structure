#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

void Display(struct array arr);
struct array* Difference(struct array *arr1,struct array *arr2);


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

struct array* Difference(struct array *arr1,struct array *arr2)
{
	int i,j,k;
	i=j=k=0;
	struct array *arr3=(struct array *)malloc(sizeof(struct array));
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
		{
			arr3->A[k]=arr1->A[i];
			i++;k++;
		}
		else if(arr1->A[i]>arr2->A[j])
		{
			j++;
		}
		else
		{
			i++;j++;	
		}
	}
	for(;i<arr1->length;i++)
	{
		arr3->A[k]=arr1->A[i];
		k++;
	}
	arr3->size=arr1->size+arr2->size;
	arr3->length=k;
	return arr3;
	
}



int main()
{
	int i,m,n;
	struct array arr1;
	struct array arr2;
	struct array *arr3;
	
	printf("Enter the size of the 1st array: \n");
	scanf("%d",&arr1.size);
	arr1.A=(int *)malloc(arr1.size*sizeof(int));
	arr1.length=0;
	printf("Enter the number of elements you want to enter: \n");
	scanf("%d",&m);
	arr1.length=m;
	printf("Enter the elements in the array: \n");
	for(i=0;i<arr1.length;i++)
	{
		scanf("%d",&arr1.A[i]);
	}
	
	printf("Enter the size of the 2nd array: \n");
	scanf("%d",&arr2.size);
	arr2.A=(int *)malloc(arr2.size*sizeof(int));
	arr2.length=0;
	printf("Enter the number of elements you want to enter: \n");
	scanf("%d",&n);
	arr2.length=n;
	printf("Enter the elements in the array: \n");
	for(i=0;i<arr2.length;i++)
	{
		scanf("%d",&arr2.A[i]);
	}
	Display(arr1);
	Display(arr2);
	arr3=Difference(&arr1,&arr2);
	Display(*arr3);
} 
	
