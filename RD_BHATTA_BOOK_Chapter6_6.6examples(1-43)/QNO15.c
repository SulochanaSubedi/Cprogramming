//qn 15
//WAP to reverse the digits of a number

#include<stdio.h>
#include<conio.h>
int main()
{
long int n, r=0;
int d;
printf("\nEnter a number to be reversed:\t");
scanf("%d",&n);
do
{
d=n%10;
r=r*10+d;
n/=10;
}while (n!=0);
printf("\nThe reversed number is %d", r);
getch();
return 0;
}
