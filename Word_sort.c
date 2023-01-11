#include <string.h>
// for using strcmp and strcpy

#define MAX 10
// Every string has this as its default length.
#include <stdlib.h>
#include <stdio.h>   
void Merge_arr(char* arr[],int beg,int mid,int end)
// Merging the Array Function
//   Merges two subarrays.
{
    int nL = mid - beg + 1;
    int nR = end - mid;
    char **L = malloc(sizeof(char *) * nL);
    char **R = malloc(sizeof(char *) * nR);
    int i; /* copying data to temp arrays */
    for (i = 0; i < nL; i++)
    {
        L[i] = malloc(sizeof(arr[beg + i]));
        strcpy(L[i], arr[beg + i]);
    }
    for (i = 0; i < nR; i++)
    {
        R[i] = malloc(sizeof(arr[mid + i + 1]));
        strcpy(R[i], arr[mid + i + 1]);
    }
    int j = 0, k; /* starting index of the first sub-array  */
    i = 0;        /* starting index of the second sub-array */
    k = beg;      /* starting index of the merged sub-array */
    while (i < nL && j < nR)
    {
        if (strcmp(L[i], R[j]) < 0)
            strcpy(arr[k++], L[i++]);
        else
            strcpy(arr[k++], R[j++]);
    }
    while (i < nL)
        strcpy(arr[k++], L[i++]);
    while (j < nR)
        strcpy(arr[k++], R[j++]);
}
void MergeSort(char *arr[], int beg, int end)
// Main MergeSort function
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        MergeSort(arr, beg, mid);
        MergeSort(arr, mid + 1, end);
        Merge_arr(arr, beg, mid, end);
    }
}
int main()
{
    printf("\nEnter the number of words: ");
    int n;
    // size of the array for storing the words

    scanf("%d", &n);
    char **arr_str = malloc(sizeof(char *) * n);
    // Creating required string array
    int i;
    for (i = 0; i < n; i++)
    {
        arr_str[i] = malloc(sizeof(char) * MAX);
        printf("\nEnter the word %d : ", (i + 1));
        scanf("%s", arr_str[i]);
    }
    MergeSort(arr_str, 0, n - 1);
    printf("\nWords in Sorted order is:\n ");
    // displaying the sorted elements
    for (i = 0; i < n; i++)
        printf("%s ->", arr_str[i]);
    return 0;
}
