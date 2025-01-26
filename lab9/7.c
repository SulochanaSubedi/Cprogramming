#include<stdio.h>

struct student{
	int roll, age;
	float avg;
	char name[50], address[50];
}std[12];

void stud(struct student std[])
{
	int i;
    printf("Name  \tAge\tRollno\tAddress  \tAverage\n");
	for(i=0; i<12; i++)
	{
		printf("%s\t%d\t%d\t%s\t%.2f\n", std[i].name, std[i].age, std[i].roll, std[i].address, std[i].avg);
	}
	
}

int main()
{
	int i;
	printf("Enter name, age, rollno, address and average marks:\n");
	for(i=0; i<12; i++)
	{
		scanf("%s%d%d%s%f", std[i].name, &std[i].age, &std[i].roll, std[i].address, &std[i].avg);
	}
	stud(std);
	return 0;
}


