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

/*
Output:
Enter name, age, rollno, address and average marks:
Sulochana 18 42 Khaireni 100
Chhaya 18 37 Khaireni 100
Rita 18 67 Ktm 90
Ram 18 56 Pkr 56
Shyam 18 77 Pkr 89
Hari 17 34 Ktm 67
Gita 18 11 Ktm 89
Tina 18 23 Pkr 78
Reeza 18 5 Pkr 100
Devi 18 16 Ktm 38
Nita 18 9 Khaireni 100
Mina 18 6 Ktm 88
Name    Age     Rollno  Address         Average
Sulochana       18      42      Khaireni        100.00
Chhaya  18      37      Khaireni        100.00
Rita    18      67      Ktm     90.00
Ram     18      56      Pkr     56.00
Shyam   18      77      Pkr     89.00
Hari    17      34      Ktm     67.00
Gita    18      11      Ktm     89.00
Tina    18      23      Pkr     78.00
Reeza   18      5       Pkr     100.00
Devi    18      16      Ktm     38.00
Nita    18      9       Khaireni        100.00
Mina    18      6       Ktm     88.00
*/


