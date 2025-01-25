//Write a program to read a sentence & delete all the white spaces. Replace all “.” by “:”.

#include<stdio.h>
#include<string.h>

int main()
{
	int  i=0, count=0, count1=0;
	char a[50];
	printf("Enter a sentence:\n");
	gets(a);
	int len=strlen(a);
	for(i=0; i<len; i++)
	{
	if(a[i]=='.')
	a[i]=';';	
	if(a[i]!=' ')
	{
	   printf("%c", a[i] );
	}
	}

	return 0;
}

/*
Output:
Enter a sentence:
My name is Sulochana Subedi.
MynameisSulochanaSubedi;
*/

