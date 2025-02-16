#include<stdio.h>
int string(char []);
int main()
{
	char word[10];
	printf("Enter a word:\n");
	scanf("%s", word);
	printf("The no of characters in the string: %d", string(word));
	return 0;
}
int string(char word[])
{
	int i, count=0;
	while(word[i]!='\0')
	{
		int a=word[i];
		if((a>=65&&a<=97)||(a>=95&&a<=122))
		count++;
		i++;
	}
	return count;
	
	
}
