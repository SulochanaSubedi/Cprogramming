#include<stdio.h>
#include<string.h>

int main()
{
	char string1[50], string2[50];
	char combine[100];
	int i;
	printf("Enter first string:\n");
	scanf("%s", string1);
	printf("Enter second string:\n");
	scanf("%s", string2);
	int l1=strlen(string1);
	int l2=strlen(string2);
	for(i=0; i<l1; i++)
	{
	combine[i]=string1[i];
    }
	for(i=0;i<l2; i++)
	{
	combine[l1+i]=string2[i];
    }
    combine[l1+l2]='\0';
    printf("%s", combine);
	return 0;
}
