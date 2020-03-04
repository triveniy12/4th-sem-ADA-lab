#include<stdio.h>
void sort(int a[],int size);
void main()
{
	int i,n,s[20],f[20];
	printf("Enter the total number of meetings:");
	scanf("%d",&n);
	printf("Enter the starting time of %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	printf("Enter the finishing time of %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&f[i]);
	sort(s,n);
	sort(f,n);
	printf("THE MEETINGS THAT CAN BE ACCOMADATED IN ROOM ARE:\n");
	for(i=0;i<=n;i++)
	{
		if(s[i+1]>=f[i])
		{
			printf("The start=%d and End=%d\n",s[i],f[i]);
	
		}
	}
}
void sort(int a[],int size)
{
	int i,j,item;
	for(i=0;i<=size-1;i++)
	{
		item=a[i];
		j=i-1;
		while(j>=0&&a[j]>item)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=item;
	}
}
