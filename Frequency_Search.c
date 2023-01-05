//Take n size of array......enter n elements....take k......check k is present in array....if yes give the index and number of times it comes
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter k:");
    int k;
    scanf("%d",&k);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            //printf("\nindex=%d",i);
            counter++;
        }
    }
    printf("\n%d",counter);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("\nindex=%d",i);
            //counter++;
        }
    }
}
