#include<stdio.h>
#include<stdlib.h>

void findgrid(int n)
{
    int A[n][n];
    int x = 0;
    int i,j,k,l;
    for(i=0;i<n/4;i++)
    {
        for(j=0;j<n/4;j++)
        {
            for(k=0;k<4;k++)
            {
                for(l=0;l<4;l++)
                {
                    A[i * 4 + k][j * 4 + l] = x; 
                    x++;
                }
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("\nEnter an Integer N which is a multiple of 4 : ");
    scanf("%d",&n);
    findgrid(n);
    return 0;
}
