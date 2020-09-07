//Accessing Two Dimensional Array
// Three methods

/***********************************************************************/

//1st method

/*

#include<stdio.h>
int main()
{
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%2d  ",arr[i][j]);
		}
		printf("\n");
	}
}

*/

/***********************************************************************/

//2nd method

/*

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	int *arr[m];
	for(i=0;i<m;i++)
	{
		arr[i]=(int*)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
}

*/

/***********************************************************************/

// 3rd method

/*

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	int **arr;
	arr=(int**)malloc(m*sizeof(int*));
	for(i=0;i<n;i++)
	{
		arr[i]=(int*)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
		{
		scanf("%d",&arr[i][j]);
     	}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d ",arr[i][j]);
	    }
	    printf("\n");
	}
}

*/

/***********************************************************************/

