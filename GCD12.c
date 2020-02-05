#include<stdio.h>
int gcd(int m,int n);
void main()
{
	int x,y,res;
	printf("Enter the value of x and y:");
	scanf("%d%d",&x,&y);
	res=gcd(x,y);
}
int gcd(int m.int n)
{
	while(m==n)
	{
		if(m<n)
			return gcd(m-n,n);
		else
			return gcd(m,n-m);
	}
}
