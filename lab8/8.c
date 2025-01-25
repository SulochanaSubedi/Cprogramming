// Write a program to concatenate two strings.

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]="ABC";
	char str2[]="Hello";
	int str1len=strlen(str1);
	int str2len= strlen(str2);
	char combine[10];
	int i;
	for(i=0; i<str1len; i++)
	{
		combine[i]=str1[i];
		printf("%c", combine[i]);
	}
	for(i=str1len;i<(str1len+str2len); i++ )
	{
		combine[i]=str2[i-str1len];
		printf("%c", combine[i]);
	}
	return 0;
}
