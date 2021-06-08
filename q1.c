// C program to find smallest and second smallest elements
#include <stdio.h>
#include <limits.h> 

void print2Smallest(int arr[], int arr_size)
{
	int i, first, second;

	if (arr_size < 2)
	{
		printf(" Invalid Input ");
		return;
	}

	first = second = INT_MAX;
	for (i = 0; i < arr_size ; i ++)
	{
		if (arr[i] < first)
		{
			second = first;
			first = arr[i];
		}
		else if (arr[i] < second && arr[i] != first)
			second = arr[i];
	}
	if (second == INT_MAX)
		printf("There is no second smallest element\n");
	else
		printf("The smallest element is %d and second "
			"Smallest element is %d\n", first, second);
}
int main()
{
	int arr[] = {12, 13, 1, 10, 34, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print2Smallest(arr, n);
	return 0;
}

