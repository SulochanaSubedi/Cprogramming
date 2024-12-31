#include<stdio.h>
#include<conio.h>
int main()
{
	int n, flag=1;
	printf("enter a number:");
	scanf("%d", &n);
	for(;n%2==0;)
	{
		printf("The number is even");
		flag=0;
		break;
	}
	for(;flag;)
	{
		printf("The number is odd");
		break;
	}
	return 0;
		}

