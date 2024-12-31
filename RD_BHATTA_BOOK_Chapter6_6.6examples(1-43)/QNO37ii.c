#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=5;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j<=2*n-2*i-1;j++)
		printf("\t%d",j);
		for(j=2*n-2*i-2;j>=n-i;j--)
		printf("\t%d",j);
		printf("\n"); /*to change line*/
		for(j=0;j<i;j++)
		printf("\t"); //for space */
		
	}
	getch();
	return 0;
}
