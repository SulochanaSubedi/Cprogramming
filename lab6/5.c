#include<stdio.h>
int prime(int);

int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	int result=prime(n);
	printf("The returned value is %d", result);
	return 0;
}

int prime(int n)
{
	int i, count=0;
	for(i=1; i<=n; i++)
	{
	  if(n%i==0)
	  count++;	
	}
	if(count==2)
	return 1;
	else
	return 0;
}

/*
Output:
Enter a number:
5
The returned value is 1
*/
