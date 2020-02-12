#include<stdio.h>
#include<time.h>
void main()
{
	int i,j,n,temp,a[10];
	clock_t time_req1,time_req2;
	double time_req3;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	time_req1=clock();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	time_req2=clock();
	time_req3=((double)(time_req2-time_req1)/ CLOCKS_PER_SEC);

	printf("Sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("The time took is  %ld ticks %3f seconds",(time_req2-time_req1),time_req3);
		
}
