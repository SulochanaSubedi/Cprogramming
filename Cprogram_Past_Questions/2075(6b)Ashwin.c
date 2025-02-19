#include<stdio.h>

struct Person
{
	char Name[40];
	char address[40];
	int salary;
}p[5];

void pass(struct Person p[]);

int main()
{
   int i;
   printf("Enter name, address and salary of 5 person:\n");
   for(i=0; i<5; i++)
   {
   	scanf("%s%s%d", p[i].Name, p[i].address, &p[i].salary);
    }	
    pass(p);
    printf("Name\tAddress\tIncreasesSalary:\n");
     for(i=0; i<5; i++)
   {
   	printf("%s\t%s\t%d\n", p[i].Name, p[i].address, p[i].salary);
    }	
    
}

void pass(struct Person p[])
{
	int i;
	for(i=0; i<5; i++)
	{
		p[i].salary+=0.15*p[i].salary;
	}
}
