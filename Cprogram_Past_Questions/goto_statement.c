#include<stdio.h>

int main(){
	int i, num1, num2;
	printf("Enter first number:");
	scanf("%d", &num1);
	if(num1<0)
	goto negative;
	printf("Enter second number:");
	scanf("%d", &num2);
	if(num2<0)
	goto negative;
	printf("The both numbers are positive");
	negative:
		printf("Either number is negative");
	return 0;	
}
