#include <stdio.h>
int binarySearch(int arr[], int u, int d, int x)
{
	if (d >= u) {
		int mid = u + (d - u) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x){
		    return binarySearch(arr, u, mid - 1, x);
		}
		return binarySearch(arr, mid + 1, d, x);
	}
	return -1;
}
int main(void)
{
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
	int arr[n];
	printf("Enter Elements in order\n");
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	int x;
	printf("Enter Number to find:");
	scanf("%d",&x);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
