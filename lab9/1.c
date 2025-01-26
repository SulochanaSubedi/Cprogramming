#include<stdio.h>

struct student{
	int roll, age;
	float mop, moc, mom;
	char name[50], address[50];
}std[3];

int main()
{
	int i;
	float avg[3];
	printf("Enter name, age, rollno, address, marks in physics, chemistry amd maths of 3 students:\n");
	for(i=0; i<3; i++)
	{
		scanf("%s%d%d%s%f%f%f", std[i].name, &std[i].age, &std[i].roll, std[i].address, &std[i].mop, &std[i].moc, &std[i].mom);
        avg[i]=(std[i].mop+std[i].moc+std[i].mom)/3;
	}
	printf("Name  \tAge\tRollno\tAddress\tMop\tMoc\tMom:\n");
	for(i=0; i<3; i++)
	{
		printf("%s\t%d\t%d\t%s\t%.2f\t%.2f\t%.2f\n", std[i].name, std[i].age, std[i].roll, std[i].address, std[i].mop, std[i].moc, std[i].mom);
        printf("The average is %.2f\n", avg[i]);
	}
	return 0;
}


/*
Output:
Enter name, age, rollno, address, marks in physics, chemistry amd maths of 3 students:
Sam 19 15 ktm 99 100 100
Ram 20 20 Pkr 100 88 88
Raj 19 24 ktm 50 50 50
Name    Age     Rollno  Address Mop     Moc     Mom:
Sam     19      15      ktm     99.00   100.00  100.00
The average is 99.67
Ram     20      20      Pkr     100.00  88.00   88.00
The average is 92.00
Raj     19      24      ktm     50.00   50.00   50.00
The average is 50.00
*/
