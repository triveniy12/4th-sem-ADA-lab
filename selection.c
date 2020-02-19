#include<stdio.h>
#include<time.h>
void main()
{
	int n,i,j,ar[20],min,temp,small;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	clock_t treq1,treq2;
	double treq3;
	treq1=clock();
	for(i=0;i<n;i++)
	{
		small=ar[i];
		min=i;
		for(j=i+1;j<n-1;j++)
		{
			if(ar[j]<small)
			{
				small=ar[j];
				min=j;
			}
		}
		temp=ar[i];
		ar[i]=ar[min];
		ar[min]=temp;
	}
	treq2=clock();
	treq3=((double)(treq2-treq1)/ CLOCKS_PER_SEC);
	printf("Sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);
	}
	printf("The time took is  %ld ticks %3f seconds",(treq2-treq1),treq3);
}
