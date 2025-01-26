#include<stdio.h>

struct function{
	char name[100];
	int age;
}f;

void func(struct function f)
{
	printf("The name and age is %s and %d", f.name, f.age);
}

int main()
{
	printf("Enter name and age:\n");
	scanf("%s%d", f.name, &f.age);
	func(f);
	return 0;
}

/*
Output:
Enter name and age:
Sulochana 18
The name and age is Sulochana and 18
*/
