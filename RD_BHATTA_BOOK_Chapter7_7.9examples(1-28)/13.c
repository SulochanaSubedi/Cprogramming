#include<stdio.h>

void conversion(char *c)
{
	if(*c>=65&&*c<=90)
	*c+=32;
	else if(*c>=97 && *c<=122)
	*c-=32;
}

int main()
{
	char ch;
	printf("Enter a charactr:\n");
	scanf("%c", &ch);
	conversion(&ch);
	printf("The equivalent character is %c", ch);
	return 0;
}
