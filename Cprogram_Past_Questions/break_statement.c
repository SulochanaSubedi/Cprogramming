#include<stdio.h>

int main()
{
	int i, num;
	printf("\nEnter a number:");
	scanf("%d", &num);
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			printf("\nNot Prime!!!!");
			break;
		}
	}
	printf("%d\n", i);
	if(i==num)
	{
		printf("\nPrime Number!!!");
	}
	return 0;
}
