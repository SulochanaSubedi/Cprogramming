#include<stdio.h>

int sum(int n)
{
	int add=0;
   if(n<10)
   return n;
   while(n)
   {
    add+=(n%10);
    n/=10;
   }
   return sum(add);
}

int main()
{
	int i, n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	printf("The sum is %d", sum(n));
	return 0;
}
