#include<stdio.h>

struct karmachari
{
	int ID_Number;
	char Name[30];
	int salary;
}e[5];

void search(struct karmachari e[], int);

int main()
{
	int money;
	int i;
   printf("Enter the details of Employees:\n");
   for(i=0; i<5; i++)
   {
   	printf("Enter id , name and salary:\n");
   	scanf("%d %s %d", &e[i].ID_Number, e[i].Name, &e[i].salary);
   }
   printf("Enter salary of which data need to be displayed:\n");
   scanf("%d", &money);
   search(e, money);
   return 0;	
}

void search(struct karmachari e[], int money)
{
	int i;
	for(i=0; i<5; i++)
	{
		if(money==e[i].salary)
		{
			printf("Id , Name and Salary:\n");
   	        printf("%d\t%s\t%d\n", e[i].ID_Number, e[i].Name, e[i].salary);
		}
	}
}
