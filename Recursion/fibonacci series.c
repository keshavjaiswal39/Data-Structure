#include<stdio.h>

int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fib(n-2)+fib(n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("The fibonacci series is %d",fib(n));
}
