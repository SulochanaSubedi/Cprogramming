#include<stdio.h>

struct Book
{
    char Name[20];
    int price;
}b[10], temp;

void maxPrice(struct Book b[]);

int main()
{
	int i;
	printf("Enter the details of 10 records:\n");
	for(i=0; i<10; i++)
	{
		printf("Enter Name and Price:\n");
		scanf("%s %d", b[i].Name, &b[i].price);
	}
	maxPrice(b);
	printf("\nDisplaying the records of Book of Maximum price:\n");
	printf("\nName\tPrice\n");
	printf("%s\t%d", temp.Name, temp.price);
	return 0;
}

void maxPrice(struct Book b[])
{
    int i;
    temp=b[0];
    for(i=0; i<10; i++)
    {
    	if(temp.price<b[i].price)
    	{
        temp=b[i];	
		}
	}
}
