#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i;
	char ar1[12]={'I','o','E',' ','P','U','L','C','H','O','W','K','\0'};
	char ar2[15]="IoE, Pulchowk";
	char ar3[11]={{'I'},{'O'},{'E'},{'P'},{'U'},{'L'},{'C'},{'H'},{'O'},{'W'},{'K'}};
	for(i=0; i<12; i++)
	printf("\nArray 1=%c\n", ar1[i]);
	printf("\nArray 2=%s\n", ar2);
	for(i=0;i<11;i++)
	printf("\nArray 3=%c\n", ar3[i]);
	return 0;
}
