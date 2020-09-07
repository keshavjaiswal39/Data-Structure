#include<stdio.h>
#include<math.h>

int power(int m,int n)
{
	if (n==0)
	{
		return 1;
	} 
	if(n%2==0)
	{
		return power(m*m,n/2);
	}
	else
	{
		return m*power(m*m,(n-1)/2);
	}
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("Power of a numbers is = %d",power(m,n));
	return 0;
}
