#include<stdio.h>
#include<string.h>
int compare(char [], char []);
int main()
{
	char str1[30], str2[30];
	int chk;
	printf("Enter two strings:\n");
	scanf("%s%s", str1, str2);
	chk=compare(str1, str2);
	
		if(chk==0)
		printf("%s and %s are same.", str1, str2);
		else if(chk==1)
		printf("%s comes before %s", str1, str2);
		else
		printf("%s comes before %s", str2, str1);
		
	return 0;
}

int compare(char name1[], char name2[])
{
	int i, j, l1, l2;
	int chk;
	l1=strlen(name1);
	l2=strlen(name2);
	for(i=0; i<l1 ||i<l2; i++)
	{
		if(name1[i]==name2[i])
		{
			chk=0;
			continue;
		}
		else if(name1[i]>name2[i])
		{
			chk=1;
			break;
		}
		else
		 chk=-1;
		 break;
	}
	return chk;
}
