#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

int Max(struct array arr);
void SumPair(struct array,int H[],int k);


int Max(struct array arr)
{
	int i;
	int max=arr.A[0];
	for(i=0;i<arr.length;i++)
	{
		if(max<arr.A[i])
		{
			max=arr.A[i];
		}
	}
	return max;
}

void SumPair(struct array arr,int H[],int k)
{
	int i;
	
	for(i=0;i<arr.length;i++)
	{
		if(H[k-arr.A[i]]!=0)
		{
			printf("(%d , %d)\n",arr.A[i],k-arr.A[i]);
		}
		H[arr.A[i]]++;
	}
}



int main()
{
	int i,n,k;
	int H[100]={0};
	struct array arr;
	printf("Enter the size of the array: \n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of array you want to input: \n");
	scanf("%d",&n);
	arr.length=n;
	printf("Enter the number of elements you want in the array\n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	printf("The pair sum has to be equal to \n");
	scanf("%d",&k);
	SumPair(arr,H,k);
}




