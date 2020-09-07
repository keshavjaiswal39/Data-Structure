#include<stdio.h>

int fun(int n)
{
	static int x=0;
	if(n>0)
	{
		x++;
		return fun(n-1)+x;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}
