#include<stdio.h>

int fun(int n)
{
	if(n>0)
	{
		return fun(n-1)+n;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}
