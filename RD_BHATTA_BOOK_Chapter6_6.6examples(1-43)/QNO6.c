#include<stdio.h>
#include<conio.h>
int main()
{
float prod,n1,n2;
printf("Enter two numbers");
scanf("%f %f",&n1,&n2);
prod=n1*n2; 
if(prod>n2)
{
 if(prod>n2)
    printf("\n The product=%.2f is greater than n1 and n2",prod);
 else
    printf("\n The product is %.2f is greater than n1 nut lesser than n2",prod);	
}
else
{
	if(prod>n2)
	 printf("\n The product=%.2f is lesser than n1 and greater than n2",prod);
	else
	printf("\n The product=%.2f is lesser than n1 and n2",prod);
}
getch();
return 0;
}

