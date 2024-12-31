#include<stdio.h>

int main()
{
	long int n, n1,n2, sum=0;
	int digit, i,j;
	printf("\nEnter Range n1 and n2:");
	scanf("%ld %ld", &n1, &n2);
	printf("\nThe Armstrong Numbers from %d to %d are:", n1, n2);
	for(i=n1;i<=n2; i++)
	{
		sum=0;
		n=i;
		j=i;
		do
		{
			digit=j%10;
			sum+=digit*digit*digit;
			j/=10;
		}while(j!=0);
		if(n==sum)
		printf("%d",i);
	}
	return 0;
}
