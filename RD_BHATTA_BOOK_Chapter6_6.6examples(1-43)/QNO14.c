// qn 14
// WAP to compute the sum of digits of a given integer number.

#include <stdio.h>
#include <conio.h>
int main()
{
int n, r, q, s=0;
printf("Enter a number:\t");
scanf("%d",&n);
do
{
q=n/10;
r=n%10;
n=q;
s+=r;
}while (q!=0);
printf("\nThe sum of digits is:\t%d",s);
getch();
return 0;
}
