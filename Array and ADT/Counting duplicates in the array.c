#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int length;
	int size;
};

// 3 6 8 8 10 12 15 15 15 18 20

void countduplicates(struct array arr)
{
	int i,j=0;
	for(i=0;i<arr.length-1;i++)
	{
	    if(arr.A[i]==arr.A[i+1])
	    {
	    	j=i+1;
	    }
	    while(arr.A[j]==arr.A[i])
	    {
	 		j++;
		}
		if(j>1)
		{
		printf("The number %d is present %d times\n",arr.A[i],j-i);
	    }
		i=j-1;
    }
}

int main()
{
    int i,n;
    struct array arr;
    printf("Enter the size of elements in the array: \n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of elements you want to input: \n");
	scanf("%d",&n);
	arr.length=n;
	printf("Enter the number in the array: \n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	countduplicates(arr);
	
}
