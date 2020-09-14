#include<stdio.h>
#include<stdlib.h>

struct Matrix{
	int *A;
	int dim;
};

void set(struct Matrix *m,int i,int j,int x)
{
	if(i<=j)
	{
		m->A[j*(j-1)/2+(i-1)]=x;
	}
}

int get(struct Matrix m,int i,int j)
{
	if(i<=j)
	{
		return m.A[j*(j-1)/2+(i-1)];
	}
	else
	{
		return m.A[j*(j-1)/2+(i-1)];
	}
}

void display(struct Matrix m)
{
	int i,j;
	for(i=1;i<=m.dim;i++)
	{
		for(j=1;j<=m.dim;j++)
		{
			if(i<=j)
			{
				printf("%d ",m.A[j*(j-1)/2+(i-1)]);
			}
			else
			{
				printf("%d ",m.A[j*(j-1)/2+(i-1)]);
			}
		}
		printf("\n");
	}
}


int main()
{
	int i,j,x;
	struct Matrix m;
	printf("Enter the dimension of the matric you want: \n");
	scanf("%d",&m.dim);
	m.A=(int *)malloc(m.dim*(m.dim+1)/2*sizeof(int));
	for(i=1;i<=m.dim;i++)
	{
		for(j=1;j<=m.dim;j++)
		{
			printf("Enter value for %d %d\n",i,j);
			scanf("%d",&x);
			set(&m,i,j,x);
		}
	}
	display(m);
	printf("Which index value do you want to know? (e.g: 1 3) \n");
	scanf("%d %d",&i,&j);
	printf("The value at the given index is: %d",get(m,i,j));
}
