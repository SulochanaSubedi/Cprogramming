#include<string.h>
#include<stdlib.h>

int main(void)
{
	char s1[80]="Capsules of C";
	char s2[]="Programming";
	char st1[80]="Capsules of C";
	char st2[]="Programming";
	char *location=strchr(s1, 'o');
	char *str1="Capsules of C programming";
	char *str2="Capsules of OOP";
	char *s11="of";
	char st11[]="This.is.Capsules.of.C.Programming";
	char delim=".";
	char *rs1t;
	long value;
	char *str11="345823 Decimal Numbers";
	char *st22="3762 octal Numbers";
	char *str22="101111001 Binary Numbers";
	char *s22="3A6B7 hexadecimal Numbers";
	strcat(s1, s2);
	printf("\n %s", s1);
	strncat(st1, st2, 4);
	printf("\n %s", st1);
	if(location)
	printf("\n 'o' is found at location: %d", location);
	else
	printf("\n 'o' is found in the string");
	location=strrchr(s1, 'o');
	if(location)
	printf("\n The last position of o: %d", location);
	else
	printf("\n 'o' is not found in the string");
	strcmp(str1, str2)==0?printf("\n Two Strings are Identical"):printf("\n Two strings are not identical");
	strncmp(str1, str2, 8)==0?printf("\n Two Strings are Identical"):printf("\n Twostrings are not identical");
	location=strstr(s1, s2);
	if(location)
	printf("\n substring matched");
	else
	printf("\n substring not matched");
	printf("\n The postion of first character of str2 that doesnot matched with str1 is: %d", strspn(str1, str2));
	printf("\n The postion of first character of str2 that matches with str1 is: %d", strcspn(s1, s11));
	location=strpbrk(s1, s11);
	if(location==NULL)
	printf("\n No character in str2 matches with that in str1");
	else
	printf("\n character in str2 matches with that ib str1\n");
	rs1t=strtok(st11, delim);
	while(rs1t!=NULL)
	
}
