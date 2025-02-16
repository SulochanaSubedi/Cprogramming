#include<stdio.h>

int prime(int);

int main()
{
  int n, i, num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  if(prime(num))
  printf("\nThe number is prime.");
  else
  printf("\nThe number is not prime.");
  printf("\nEnter the value of n:\n");
  scanf("%d", &n);
  printf("\nDisplaying prime number from 1 to %d\n", n);
  for(i=1; i<=n; i++)
  {
  	if(prime(i))
  	printf("%d\t", i);
  }	
  return 0;
}

int prime(int a)
{
	int count=0, b=1;
	for(b=1; b<=a; b++)
	{
		if(a%b==0)
		count++;
	}
	if(count==2)
	return 1;
	else
	return 0;
}
