// Write a program to check whether input alphabet is vowel or not using if-else statement.

#include<stdio.h>

int main()
{
	char c;
	printf("Enter a  alphabet:\n");
	scanf("%c", &c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("Alphabet is vowel");
	}
	else
	{
		printf("Alphabet is consonant");
	}
	return 0;
}
