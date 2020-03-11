#include<stdio.h>
#include<time.h>
void merge_sort(int low,int high,int a[]);
void merge(int low,int mid,int high,int a[]);
void main()
{
	int n,a[20];
	int i;
	clock_t start,end;
	double time_req;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	start=clock();
		merge_sort(0,n-1,a);
		//merge(low,mid,high,a);
	end=clock();
	
	time_req=((double)(end-start)/CLOCKS_PER_SEC);
	printf("\n\nThe time required to sort the elements is %f",time_req);
	printf("The sorted elements are:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
void merge_sort(int low,int high,int a[])
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(low,mid,a);
		merge_sort(mid+1,high,a);
		merge(low,mid,high,a);
	}
}
void merge(int low,int mid,int high,int a[])
{
	int i,j,k,c[20];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			k+=1;
			i+=1;
		}
		else
		{
			c[k]=a[j];
			k+=1;
			j+=1;
		}
	}
	while(i<=mid)
	{
		c[k]=a[i];
		k=k+1;
		i=i+1;
	}
	while(j<=high)
	{
		c[k]=a[j];
		k=k+1;
		j=j+1;
	}
	
	for(k=0;k<high;k++)
	{
		a[k]=c[k];
	}
	
	
}
