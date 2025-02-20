//Write set of strings each of length 40 into a file “stringc.txt” and display it (use fputs() and fgets() function).

#include<stdio.h>

int main()
{
	FILE *f;
	char strings[5][40];
	printf("Enter strings:\n");
	int i;
	for(i=0; i<5; i++)
	{
		printf("String:\n");
		scanf(" %s", strings[i]);
	}
	f=fopen("stringc.txt", "w");
	for(i=0; i<5; i++)
	{
	   fputs(strings[i], f);
	   fputc('\n', f);
	}
	fclose(f);
	f=fopen("stringc.txt", "r");
	printf("Contents of file:\n");
	char ch;
	while((ch=fgetc(f))!=EOF)
	{
		putchar(ch);
	}
	fclose(f);
	return 0;
}

/*
Output:
Enter strings:
String:
Sulochana
String:
Subedi
String:
Address
String:
Khaireni
String:
Tanahun
Contents of file:
Sulochana
Subedi
Address
Khaireni
Tanahun
*/
