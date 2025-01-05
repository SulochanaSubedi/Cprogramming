// Write a program to read a string and check for palindrome without using string related function (a string is palindrome if its half is mirror by itself eg: abcdcba). 

#include<stdio.h>

int main()
{
	int i=0, length=0, count=0;
	char ch[30];
	printf("Enter a word:\n");
	scanf("%s", ch);
	while(ch[i]!='\0')
	{
		length++;
		i++;
    }
    for(i=0; i<length; i++)
    {
    	if(ch[i]==ch[length-i-1])
    	{
    		count++;
		}
	
	}
	
	if(count==length)
	printf("\nThe given string is palindrome");
	else
	printf("\nThe given string is not palindrome");
	return 0;
}

/*
Output:
Enter a word:
madam

The given string is palindrome
*/
