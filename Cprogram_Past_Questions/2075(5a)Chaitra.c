#include<stdio.h>

void function(int arr[], int *largest, int *smallest, int n);

int main()
{
	int arr[100], largest, smallest;
	int i, n;
	printf("How many elements:\n");
	scanf("%d", &n);
	printf("Enter elements:\n");
	for(i=0; i<n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	function(arr, &largest, &smallest, n);
	printf("Largest=%d and smallest =%d", largest, smallest);
	return 0;
}

void function(int arr[], int *largest, int *smallest, int n)
{
	*largest=arr[0];
	*smallest=arr[0];
	int i;
	for(i=0; i<n; i++)
	{
		if(*largest<arr[i])
		*largest=arr[i];
		if(*smallest>arr[i])
		*smallest=arr[i];
	}
}
