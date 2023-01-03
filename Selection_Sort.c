#include<stdio.h>
void Selection(int arr[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
void give(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Selection(arr,n);
    give(arr,n);
}
