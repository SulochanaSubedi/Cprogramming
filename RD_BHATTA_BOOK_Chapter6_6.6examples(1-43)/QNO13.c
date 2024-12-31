// qn 13
// program to count number of digits in a number

#include <stdio.h>
#include<conio.h>
int main ()
{
int num, count=0;
printf("Enter a number:");
scanf("%d",&num);
while (num)
{
num=num/10;
count ++;}
printf("Total digits is: %d", count);
getch();
return 0;
}
