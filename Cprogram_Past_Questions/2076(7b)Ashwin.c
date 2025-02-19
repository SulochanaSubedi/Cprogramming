#include<stdio.h>
#include<string.h>

struct record
{
	char name[20];
	int age;
}r[100];

void sort(struct record r[])
{
	struct record temp;
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=i+1; j<4; j++)
		{
			if(strcmp(r[i].name, r[j].name)>0)
		{
			temp=r[i];
			r[i]=r[j];
			r[j]=temp;
		}
		
		}
	}
}

int main()
{
	int i, j;
	FILE *f1;
	f1=fopen("record.txt", "w");
	for(i=0; i<4; i++)
	{
		printf("Enter name and age:\n");
		scanf("%s%d", r[i].name, &r[i].age);
		fprintf(f1,"%s\t%d\n", r[i].name, r[i].age);
	}
	fclose(f1);
	f1=fopen("record.txt", "r");
	for(i=0; i<4; i++)
	{
	fscanf(f1, "%s%d", r[i].name, &r[i].age);	
	}
	fclose(f1);
	sort(r);
	for(i=0; i<4; i++)
	printf("%s\t%d\n", r[i].name, r[i].age);
	return 0;
}
