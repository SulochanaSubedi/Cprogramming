//Write a program to copy one string to another string with and without using string handling function.

#include<stdio.h>

int main()
{
	int i=0;
	char str1[30], str2[30];
	printf("Enter a string:\n");
	scanf("%s", str1);
	printf("The copied string is: ");
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		printf("%c", str2[i]);
		i++;
	}
}
