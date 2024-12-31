#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	long int sum=1;
	printf("\n How many terms?");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	  sum=i*(i-1);
	printf("The sum 1+2x1+3x2+4x3+.....+n=%ld",sum);
	getch();
	return 0;
}
