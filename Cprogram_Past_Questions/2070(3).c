#include<stdio.h>

int main()
{
	int n, countodd=0, counteven=0;
	printf("Enter a number:\n");
	while(n!=1)
	{
	   	scanf("%d", &n);
	   	if(n%2==0)
	   	{
	   	  	counteven++;
		}
		else
		{
			countodd++;
		}
	}
	printf("The count of even and odd numbers entered by u are %d and %d", counteven, countodd);
	return 0;
}
