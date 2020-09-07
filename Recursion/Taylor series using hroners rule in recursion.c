#include <stdio.h>

double e(int x, int n)
{
 static double s;
 if(n==0)
 return s;
 s=1+x*s/n;
 return e(x,n-1);

}
int main()
{
	int x,n;
	scanf("%d %d",&x,&n);
	printf("The taylor series for given value is: %lf",e(x,n));
	return 0;
}
