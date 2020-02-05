#include<stdio.h>
int gcd(int m,int n);
void main()
{
	int x,y,res;
	printf("Enter the value of x and y:");
	scanf("%d%d",&x,&y);
	res=gcd(x,y);
	printf("THE GCD of given numbers is %d",res);
}
int gcd(int m,int n)
{
	int r;
	if(n==0)
		return m;
	else
		r=m%n;
		return gcd(n,r);
}
