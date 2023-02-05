#include <stdio.h>

int search(int array[], int n, int x) {
  
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
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
	printf("Your entered array : ");

  int result = search(arr, n, t);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}