//Write a program to input two integer numbers and display the sum of even numbers between these two input numbers.

#include<stdio.h>

int main()
{
	int a[2],i,sum=0;
	printf("Enter numbers:\n");
	
	for(i=0;i<2;i++)
	{
	scanf("%d", &a[i]);
    }
	
	for(i=0;i<2;i++)
	{
		if(a[i]%2==0)
		{
			sum+=a[i];
		}
	}
	printf("The sum is %d", sum);
	return 0;
}
