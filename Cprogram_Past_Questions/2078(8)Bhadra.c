#include<stdio.h>

struct Faculty
{
	int StaffID;
	char Name[30];
	char Address[30];
	struct ServiceYear
	{
		int DurationInYear;
	}s;
}f[100];

int main()
{
	int i, n;
	printf("Enter how many staff:\n");
	scanf("%d", &n);
	printf("Enter StaffID, Name, Address and DurationInYear:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d%s%s%d", &f[i].StaffID, f[i].Name, f[i].Address, &f[i].s.DurationInYear);
	}
	printf("\nDisplaying the required Information:\n");
	printf("StaffID\tName\tAddress\tDurationInYear\n");
	for(i=0; i<n; i++)
	{
		if(f[i].s.DurationInYear>10&&f[i].s.DurationInYear<30)
		printf("%d\t%s\t%s\t%d\n", f[i].StaffID, f[i].Name, f[i].Address, f[i].s.DurationInYear);
	}
}
