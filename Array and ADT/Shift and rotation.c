#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

void Display(struct array arr);
//void lShift(struct array *arr);
//void rShift(struct array *arr);
//void lRot(struct array *arr);
//void rRot(struct array *arr);


void Display(struct array arr)
{
	int i;
	printf("The elements in the array are: \n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

/*void lShift(struct array *arr)
{
	int i;
	for(i=0;i<arr->length-1;i++)
	{
		arr->A[i]=arr->A[i+1];
	}
	printf("\nThe elements in the array after left shift are: \n");
	for(i=0;i<arr->length-1;i++)
	{
		printf("%d ",arr->A[i]);
	}
}*/

/*void rShift(struct array *arr)
{
	int i;
	for(i=arr->length-1;i>0;i--)
	{
		arr->A[i]=arr->A[i-1];
	}
	printf("\nThe elements in the array after right shift are: \n");
	for(i=1;i<=arr->length-1;i++)
	{
		printf("%d ",arr->A[i]);
	}
}*/

/*void lRot(struct array *arr)
{
	int i,x;
	x=arr->A[0];
	for(i=0;i<arr->length-1;i++)
	{
		arr->A[i]=arr->A[i+1];
	}
	arr->A[arr->length-1]=x;
	printf("\nThe elements in the array after left rotation are: \n");
	for(i=0;i<=arr->length-1;i++)
	{
		printf("%d ",arr->A[i]);
	}
}*/

/*void rRot(struct array *arr)
{
	int i,x;
	x=arr->A[arr->length-1];
	for(i=arr->length-1;i>0;i--)
	{
		arr->A[i]=arr->A[i-1];
	}
	arr->A[0]=x;
	printf("\nThe elements in the array after right rotation are: \n");
	for(i=0;i<=arr->length-1;i++)
	{
		printf("%d ",arr->A[i]);
	}
}*/

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
	//lShift(&arr);
	//rShift(&arr);
	//lRot(&arr);
	//rRot(&arr);
}
