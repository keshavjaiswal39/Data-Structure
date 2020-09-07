#include<stdio.h>

int fib(int n)
{
	int t0=0,t1=1,sum=0,i;
	if (n<=1) return n;
	for (i=2;i<=n;i++)
	{
		sum=t0+t1;
		t0=t1;
		t1=sum;
	}
	return sum;
}


int  main ()
{
	int a ;
	printf("Enter a number ");
	scanf("%d",&a);
	printf("fibbo using loop is %d \n",fib(a));
	return 0;
}
