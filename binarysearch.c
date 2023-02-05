// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
 int arr[100], n, t;
	printf("Enter the size of array : ");
	scanf("%d", &n);
	printf("Enter the number you want to search : ");
	scanf("%d",&t);
	printf("Enter the values of elements in array : ");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
  int result = binarySearch(arr, t, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}