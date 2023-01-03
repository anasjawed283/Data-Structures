#include <stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void subtree(int arr[], int N, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < N && arr[left] > arr[largest])
		largest = left;
	if (right < N && arr[right] > arr[largest])
		largest = right;
	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		subtree(arr, N, largest);
	}
}

void heapSort(int arr[], int N)
{
	for (int i = N / 2 - 1; i >= 0; i--)
		subtree(arr, N, i);
	for (int i = N - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);
		subtree(arr, i, 0);
	}
}
void printArray(int arr[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
    int N;
    scanf("%d", &N);
    int arr[10];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
	heapSort(arr, N);
	printf("Sorted array is\n");
	printArray(arr, N);
}
