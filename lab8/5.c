// Write a program to read a sentence and count the number of characters &words in that sentence.

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
	int c=a[i];	
	if((c>=65&&c<=90)||(c>=97&&c<=122))
	{
		count++;
	}
	}
	for(i=0; i<len; i++)
	{
		if(a[i]==' ')
		count1++;
	}
	printf("\nThe no of characters and words in sentence are %d and %d", count, count1+1);
	return 0;
}

/*
Output:
Enter a sentence:
Hello Sulu, How are you?

The no of characters and words in sentence are 18 and 5
*/
