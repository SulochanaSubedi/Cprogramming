#include<stdio.h>

struct company{
	int phone, noofemployee;
	char name[50], address[50];
}cmpy;

int main()
{

	printf("Enter company name, address, phone no and no of employee :\n");
	scanf("%s%s%d%d", cmpy.name, cmpy.address, &cmpy.phone, &cmpy.noofemployee);
	printf("Name  \tAddress\tPhone   \tNoofemployee:\n");
	printf("%s\t%s\t%d\t%d\n", cmpy.name, cmpy.address, cmpy.phone, cmpy.noofemployee);
	return 0;
}

/*
Output:
Enter company name, address, phone no and no of employee :
AAA
Ktm
908764359
20
Name    Address Phone           Noofemployee:
AAA     Ktm     908764359       20
*/

