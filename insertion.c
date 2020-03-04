#include<stdio.h>
#include<time.h>
int insert(int ar[],int size);
void main()
{
	int i,n,a[20];
	clock_t start,end;
	double time_req;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("Enter the %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	start=clock();
		insert(a,n);
	end=clock();
	time_req=((double)(end-start)/CLOCKS_PER_SEC);
	printf("\n\nThe time required to sort the elements is %f",time_req);
}
int insert(int ar[],int size)
{
	int i,j,item;
	for(i=1;i<=size-1;i++)
	{
		item=ar[i];
		j=i-1;
		while(j>=0&&ar[j]>item)
		{
			ar[j+1]=ar[j];
			j=j-1;
		}
		ar[j+1]=item;
	}
	printf("The sorted list is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",ar[i]);
	}
}
