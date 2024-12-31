#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	 printf("%d",i);
	for(j=0;j<=n;j++)
	 printf("%d",j);
	getch();
	return 0;
}
