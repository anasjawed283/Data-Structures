#include<stdio.h>
#include<stdlib.h>

void sort(int n, int arr[])
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,m;
    printf("Enter rows:");
    scanf("%d",&n);
    printf("Enter coloumns:");
    scanf("%d",&m);
    int array[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sort(m,array[j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");

    }
    
}
