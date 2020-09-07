#include <stdio.h>

double e(int x,int n)
{
	float r;
	static double p=1,f=1;
	if (n==0)
	{
		return 1;
	}
	else
	{
		r=e(x,n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
	}
}

int main()
{
	int x,n;
	scanf("%d %d",&x,&n);
	printf("The taylor series for given value is: %lf",e(x,n));
	return 0;
}
