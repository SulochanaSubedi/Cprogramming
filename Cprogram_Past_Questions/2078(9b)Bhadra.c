#include<stdio.h>

struct student
{
	char name[30];
	int rollno;
	int age;
}s[5];

int main()
{
	FILE *f1;
	f1=fopen("std.dat", "w");
	int i;
	for(i=0; i<5; i++)
	{
		scanf("%s%d%d", s[i].name, &s[i].rollno, &s[i].age);
		fprintf(f1, "%s\t%d\t%d\n", s[i].name, s[i].rollno, s[i].age);
	}
	return 0;
}
