// WAP to enter 5 elements and display them in ascending and descending order.

#include<stdio.h>

int main()
{
	int i, j, temp, a[5];
	printf("Enter 5 numbers:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Entered numbers in ascending order:\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nEntered numbers in descending order:\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

/*
Output:
Enter 5 numbers:
1
5
4
3
2
Entered numbers in ascending order:
1       2       3       4       5
Entered numbers in descending order:
5       4       3       2       1
*/
