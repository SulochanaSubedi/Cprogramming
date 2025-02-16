#include<stdio.h>

struct college
{
	char name[40];
	char location[40];
	struct estDate
	{
		int  day;;
		int month;
		int year;
	}doe;
}col[5];

int main()
{
  int i;
  for(i=0; i<5; i++)
  {
  	printf("\nEnter name and location:\n");
  	scanf("%s %s", col[i].name, col[i].location);
  	printf("\nEnter day, month and year:\n");
  	scanf("%d%d%d", &col[i].doe.day,&col[i].doe.month,&col[i].doe.year);
  }	
  for(i=0; i<5; i++)
  {
  	printf("\nName and Location:\n");
  	printf("%s %s", col[i].name, col[i].location);
  	printf("\nDay , Month and Year:\n");
  	printf("%d\t%d\t%d", col[i].doe.day,col[i].doe.month,col[i].doe.year);
  }
  return 0;
}
