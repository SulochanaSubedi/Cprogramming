#include<stdio.h>
int calculate(int, int);
int main()
{
	int a, b;
	printf("Enter the value of a and b:\n");
	scanf("%d%d", &a, &b);
	int result=calculate(a, b);
	printf("The result is %d", result);
	return 0;
}

int calculate(int  a, int b)
{
	char c;
	printf("Enter the operator:\n");
	scanf(" %c", &c);
	if(c=='+')
	return(a+b);
	else if(c=='-')
	return(a-b);
	else if(c=='*')
	return(a*b);
	else
	return(a/b);
}

/*
Output:
Enter the value of a and b:
10 6
Enter the operator:
-
The result is 4
*/
