#include<stdio.h>
#include<math.h>

int power(int m,int n)
{
	if (n==0)
	{
		return 1;
	} 
	else
	{
		return power(m,n-1)*m;
	}
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("Power of a numbers is = %d",power(m,n));
	return 0;
}
