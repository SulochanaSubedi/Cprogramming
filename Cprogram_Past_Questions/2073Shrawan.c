#include<stdio.h>


struct employee
{
	char name[40];
	int age;
	int salary;
}e[10];

void sort(struct employee e[]);

int main()
{
	
	printf("Enter name , age and salary of 10 employee:\n");
	int i;
	for(i=0; i<10; i++)
	{
		scanf("%s %d %d", e[i].name, &e[i].age, &e[i].salary);
	}
	sort(e);
	printf("\nDisplaying the data of employee according to the sorted salary:\n");
	printf("\nName\t\tAge\tSalary\n");
	for(i=0; i<10; i++)
	{
		printf("%s\t\t%d\t%d\n",e[i].name, e[i].age, e[i].salary );
	}
	return 0;
}

void sort(struct employee e[])
{
	struct employee swap;
	int i, j;
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(e[i].salary>e[j].salary)
			{
				swap=e[i];
				e[i]=e[j];
				e[j]=swap;
			}
		}
	}
}
