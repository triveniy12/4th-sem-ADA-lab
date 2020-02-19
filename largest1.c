#include<stdio.h>
void main()
{
	int size,n,a[20],i,j,temp,k;
	printf("Enter the array size:");
	scanf("%d",&size);
	printf("Enter the array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of large elements required:");
	scanf("%d",&k);
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n-2-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The largest elements are :");
	for(i=(n-1);i>((n-1)-k);i--)
	{
		printf("%d",a[i]);
	}
}

