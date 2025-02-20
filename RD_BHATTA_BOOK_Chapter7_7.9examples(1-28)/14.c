#include<stdio.h>

void addgracemarks(int *m)
{
	*m=*m+10;
}

int main()
{
	int marks;
	printf("Enter actual marks:\n");
	scanf("%d", &marks);
	addgracemarks(&marks);
	printf("\nThe grace marks is: %d", marks);
	return 0;
}
