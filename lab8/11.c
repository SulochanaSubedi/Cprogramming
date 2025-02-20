//Write a program to print the following pattern:


#include<stdio.h>

int main()
{
	int i, j;
	char ch[10]="UNIVERSITY";
	for(i=1; i<=5; i++)
	{
		for(j=0; j<(2*i); j++)
		{
			printf("%c", ch[j]);
		}
		printf("\n");
	}
	for(i=4; i>0; i--)
	{
		for(j=0; j<(2*i); j++)
		{
			printf("%c", ch[j]);
		}
		printf("\n");
	}
	return 0;
}

/*
Output:
UN
UNIV
UNIVER
UNIVERSI
UNIVERSITY
UNIVERSI
UNIVER
UNIV
UN
*/
