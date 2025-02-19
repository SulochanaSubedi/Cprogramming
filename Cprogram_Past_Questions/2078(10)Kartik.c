#include<stdio.h>
#include<string.h>

struct employee
{
	char empName[30];
	int salary;
	char post[30];
}e[100];

int main()
{
	FILE *f1;
	int i, n;
	printf("Enter how many employees:\n");
	scanf("%d",&n);
	printf("Enter the Name, salary, and post of Employees:\n");
	f1=fopen("employee.dat","w");
	for(i=0; i<n; i++)
	{
		scanf("%s%d%s", e[i].empName, &e[i].salary, e[i].post);
		fprintf(f1, "%s\t%d\t%s\n", e[i].empName, e[i].salary, e[i].post );
	}
	fclose(f1);
	f1=fopen("employee.dat","r");
	while(fscanf(f1, "%s%d%s", e[i].empName, &e[i].salary, e[i].post)!=EOF)
	{
		if(strcmp(e[i].post, "manager")==0)
		{
			printf("Manager word is found\n");
			printf("The record of manager is:\n");
			printf("%s\t%d\t%s\n", e[i].empName, e[i].salary, e[i].post);
		}
		
	}
	fclose(f1);
}
