#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter value of n");
	scanf("%d",&n);
	printf("Series");
	for(i=1;i<n;i++)
	  printf("\t %d %d",i,i+1);
	getch();
	return 0;
}
