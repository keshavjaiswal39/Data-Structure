#include<stdio.h>

int fact(int n)
{
	if (n==0)
	{
		return 1;
	} 
	else
	{
		return sum(n-1)*n;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("Factorial of a numbers is = %d",fact(n));
	return 0;
}
