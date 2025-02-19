#include<stdio.h>

void reverse(int *arr, int n)
{
	int i, swap;
	for(i=0; i<n/2; i++)
	{
		swap=*(arr+i);
		*(arr+i)=*(arr+n-i-1);
		*(arr+n-i-1)=swap;
	}
}

int main()
{
	int n, i, arr[100];
	printf("Enter the no of elements of array:\n");
	scanf("%d", &n);
	printf("Enter the elements of array:\n");
	for(i=0; i<n; i++)
	scanf("%d", arr+i);
	reverse(arr, n);
	printf("\nArray in reverse order:\n");
	for(i=0; i<n; i++)
	{
		printf("%d", *(arr+i));
	}
	return 0;
}
