#include<stdio.h>

int fun(int n)
{
	if(n>100)
	{
		return n-10;
	}
	else
	{
		return fun(fun(n+11));
	}
}

int main()
{
	int n,r;
	scanf("%d",&n);
	r=fun(n);
	printf("%d",r);
	return 0;
}
