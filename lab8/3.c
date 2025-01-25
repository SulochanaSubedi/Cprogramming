//Write a program to swap value of two variables using function & pointer. 

#include<stdio.h>

int swap(int *, int *);

#include<stdio.h>

int main()
{
	int *a, *b, x, y;
	a=&x;
	b=&y;
	printf("Enter two numbers for swapping:\n");
	scanf("%d%d", a, b);
	printf("The value of a=%d and b=%d before swapping\n", *a, *b);
	swap(a,b);
	printf("The value of a=%d and b=%d after swapping", *a, *b);
	return 0;
}

int swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return(a, b);
}

/*
Output:
Enter two numbers for swapping:
2
3
The value of a=2 and b=3 before swapping
The value of a=3 and b=2 after swapping
*/
