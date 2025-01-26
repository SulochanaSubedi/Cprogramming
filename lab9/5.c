#include<stdio.h>

struct student{
	int roll, age;
	float mop, moc, mom;
	char name[50], address[50];
}*s;

void read(struct student *s)
{
    
	printf("\nEnter name, age, rollno, address, marks in physics, chemistry amd maths:\n");
	scanf("%s%d%d%s%f%f%f", s->name, &s->age, &s->roll, s->address, &s->mop, &s->moc, &s->mom );
}
void display(struct student *s)
{
    float avg;
	printf("Name  \tAge\tRollno\tAddress\tMop\tMoc\tMom:\n");
	printf("%s\t%d\t%d\t%s\t%.2f\t%.2f\t%.2f\n", s->name, s->age, s->roll, s->address, s->mop, s->moc, s->mom );
	avg=(s->mop+s->moc+s->mom)/3;
	printf("The average is %.2f", avg);
}

int main()
{
	int i;
	for(i=0; i<3; i++)
	{
		read(&s);
		display(&s);
	}
	return 0;
}

/*
Output:
Enter name, age, rollno, address, marks in physics, chemistry amd maths:
Sam 19 15 ktm 99 100 100
Name    Age     Rollno  Address Mop     Moc     Mom:
Sam     19      15      ktm     99.00   100.00  100.00
The average is 99.67
Enter name, age, rollno, address, marks in physics, chemistry amd maths:
Ram 20 20 Pkr 100 88 88
Name    Age     Rollno  Address Mop     Moc     Mom:
Ram     20      20      Pkr     100.00  88.00   88.00
The average is 92.00
Enter name, age, rollno, address, marks in physics, chemistry amd maths:
Raj 19 24 ktm 50 50 50
Name    Age     Rollno  Address Mop     Moc     Mom:
Raj     19      24      ktm     50.00   50.00   50.00
The average is 50.00
*/
