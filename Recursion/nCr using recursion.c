#include<stdio.h>

int fact(int n)
{
	if(n<=1)
	return 1;
	else
	{
		return fact(n-1)*n;
	}
}

int C(int n,int r)
{
	int a,b,c;
	a=fact(n);
	b=fact(r);
	c=fact(n-r);
	return a/(b*c);
}

int main()
{
	int n,r;
	scanf("%d %d",&n,&r);
	printf("nCr using recursion is %d",C(n,r));
}
