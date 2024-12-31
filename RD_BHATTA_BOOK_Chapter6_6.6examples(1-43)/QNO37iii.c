#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j=10,k,n=5;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("\t%d",j);
			j+=10;
		}
		printf("\n");
	}
	getch();
	return 0;
}
