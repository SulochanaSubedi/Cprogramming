#include<stdio.h>

struct vehicle
{
	int year;
	char brandname[30];
}v[100];

int main()
{
	int i, n;
	printf("Enter the no of vehicles:\n");
	scanf("%d", &n);
	printf("Enter the details of vehicle:\n");
	FILE *fptr;
	fptr=fopen("vehicle.dat", "w");
	for(i=0; i<n; i++)
	{
		printf("Enter year and brandname:\n");
		scanf("%d%s",&v[i].year, v[i].brandname);
		fprintf(fptr, "%d\t%s ", v[i].year, v[i].brandname); 
	}
	fclose(fptr);
	fptr=fopen("vehicle.dat", "r");
	while(fscanf(fptr, "%d%s", &v[i].year, v[i].brandname)!=EOF)
	{
		printf("%d\t%s ", v[i].year, v[i].brandname);
	}
	fclose(fptr);
	return 0;
}
