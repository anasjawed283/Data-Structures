#include<stdio.h>
#include<time.h>

int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];

    double timetaken;
    clock_t t;
    t=clock();
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    t=clock()-t;
    timetaken=((double)t)/CLOCKS_PER_SEC;

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n%f",timetaken);

}
