#include<stdio.h>

struct student
{
	char name[30];
	int rollno;
	char program[30];
	int m1, m2, m3, m4, m5, total;
}s[100];

int main()
{
	int i=0;
	char c;
	do
	{
		printf("Enter name, rollno, program and marks of 5 subjects:\n");
		scanf("%s%d%s%d%d%d%d%d", s[i].name, &s[i].rollno, s[i].program, &s[i].m1,&s[i].m2, &s[i].m3,&s[i].m4,&s[i].m5);
		s[i].total= s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
    	printf("Enter e to stop:\n");
		scanf(" %c", &c);
		i++;
	}while(c!='e');
	int a=i;
	printf("Name\tRollno\tProgram\tMark1\tMark2\tMark3\tMark4\tMark5:\n");
	for(i=0; i<a; i++)
	{
		printf("%s\t%d\t%s\t%d\t%d\t%d\t%d\t%d\n", s[i].name, s[i].rollno, s[i].program, s[i].m1,s[i].m2, s[i].m3,s[i].m4,s[i].m5);
		printf("The total marks is %d", s[i].total);
	}
	return 0;
}
