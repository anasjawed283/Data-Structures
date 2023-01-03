#include <stdio.h>
void insertion(int arr[], int n)
{
    int i, j, store;
    for (i = 1; i < n; i++)
    {
        store = arr[i];
        for (j = (i - 1); j >= 0 && arr[j] > store; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = store;
    }
}
void give(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion(arr, n);
    give(arr, n);
}
