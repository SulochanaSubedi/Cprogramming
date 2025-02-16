#include<stdio.h>

struct student
{
	char name[40];
	int rollno;
	int marks;
}s[10];

void pass(struct student s[], int);

int main()
{
	int i, n;
	printf("How many students:\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter name, rollno and marks:\n");
		scanf("%s %d %d", s[i].name, &s[i].rollno, &s[i].marks );
	}
	pass(s, n);
	return 0;
}

void pass(struct student s[], int n)
{
	int i;
		for(i=0; i<n; i++)
	{
		if(s[i].marks>=40)
		{
		printf("\n name, rollno and marks:\n");
		printf("%s %d %d\n", s[i].name, s[i].rollno, s[i].marks );
     	}
	}
}
