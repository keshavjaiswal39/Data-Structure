#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int length;
	int size;
};

void duplicates(struct array arr)
{
	int i,j,count=0;
	for(i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]!=-1)
		{
			for(j=i+1;j<arr.length;j++)
			{
				if(arr.A[i]==arr.A[j])
				{
					count++;
					arr.A[j]=-1;
				}
				if(count>1)
				{
					printf("Element %d is found %d times\n",arr.A[i],count);
				}			
			}
		}
	}
}



int main()
{
	struct array arr;
	int i,n,x;
	int H[100]={0};
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
	duplicates(arr);
	
}
