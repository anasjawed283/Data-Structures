#include <stdio.h>
int linearSearch(int a[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
            return i + 1;
    }
    return -1;
}
int main()
{
    printf("Enter Number of Elements:");
    int n;
    scanf("%d",&n);
    printf("Enter each element in order\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int value;
    printf("Enter Value to be searched:");
    scanf("%d",&value);
    int store = linearSearch(arr, n, value);
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\nElement to be searched is:%d", value);
    if (store == -1)
        printf("\nElement is not present in the array");
    else
        printf("\nElement is present at %d position of array", store);
    return 0;
}
