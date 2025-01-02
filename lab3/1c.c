// Get input of your name, address, age in years, weight and height from keyboard and display the information using unformatted I/O (String I/O).

#include<stdio.h>
#include<conio.h>

int main()
{
	char name[30], address[30];
	int age, weight, height;
	puts("Enter name:");
	gets(name);
	puts("Name is");
	puts(name);
	puts("Enter address:");
	gets(address);
	puts("Address is");
	puts(address);
	printf("Enter age, weight and height:\n");
	scanf("%d%d%d", &age, &weight, &height);
	printf("Age, weight and height is\n");
	printf("%d, %d and %d", age, weight, height);
	getch();
	return 0;
}
