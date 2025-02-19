#include<stdio.h>
#include<string.h>

struct student
{
	char name[30];
	char address[30];
	int id;
}s[100];

void pass(struct student s[], int n);

int main()
{
	int i;
	int n;
	printf("Enter how many students:\n");
	scanf("%d", &n);
	printf("Enter name, address and id :\n");
	for(i=0; i<n; i++)
	{
		scanf("%s%s%d", s[i].name, s[i].address, &s[i].id);
	}
	pass(s, n);
	printf("Displaying the information according to alphabetical order:\n");
	printf("Name\tAddress\tID\n");
	for(i=0; i<n; i++)
	{
		printf("%s\t%s\t%d\n", s[i].name, s[i].address, s[i].id);
	}
	return 0;
}

void pass(struct student s[], int n)
{
	struct student swap;
	int i, j;
	swap=s[0];
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(strcmp(s[i].name, s[j].name)>0)
			{
				swap=s[i];
				s[i]=s[j];
				s[j]=swap;
			}
		}
	}
}
