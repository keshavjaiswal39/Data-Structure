#include<stdio.h>

int ncr(int n,int r)
{
	if(n==r || r==0)
	{
		return 1;
	}
	else
	{
		return ncr(n-1,r-1)+ncr(n-1,r);
	}
}
int main()
{
	int n,r;
	scanf("%d %d",&n,&r);
	printf("nCr using Pascal's trianle : %d",ncr(n,r));
	return 0;
}
