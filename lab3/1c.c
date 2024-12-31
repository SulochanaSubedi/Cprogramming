// Get input of your name, address, age in years, weight and height from keyboard and display the information using unformatted I/O (String I/O).

#include<stdio.h>

int main()
{
	char name[30], address[30];
	int age, weight, height;
	printf("Enter name:\n");
	printf("Name:");
	puts(name);
	printf("Enter address:\n");
	printf(", Address:");
	puts(address);
	printf("Enter age, weight and height:\n");
	scanf("%d%d%d", &age, &weight, &height);
	printf(" ,Age:%d, Weight:%d and Height:%d",age,weight,height);
	
}
