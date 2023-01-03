//In quicksort we will take a small number of elements because runtime will increase considerably for large number of elements
#include <stdio.h>
void quicksort(int number[30], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}
int main()
{
    int i, count, number[30];
    printf("Enter number of elements (Max. 30): ");
    scanf("%d", &count);
    printf("Enter elements\n");
    for (i = 0; i < count; i++)
        scanf("%d", &number[i]);
    quicksort(number, 0, count - 1);
    printf("The Sorted Order is: ");
    for (i = 0; i < count; i++)
        printf(" %d", number[i]);
    return 0;
}
