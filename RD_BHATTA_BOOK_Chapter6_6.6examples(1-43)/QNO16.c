//qn 16
//WAP to find the number of and sum of all integers greater than n1 and less than n2 and divisible by 7, when n1<n2 and n1&n2 are read from keyboard

#include<stdio.h>
#include<conio.h>
int main()
{
int n1, n2, c=0,i, s=0;
printf("Enter n1 and n2\t");
scanf("%d %d",&n1,&n2);
if (n1>n2)
{
printf("\n Enter n1 and n2 such that n1<n2\t");
}
else
{
for (i=n1+1; i<n2; i++)
{ if (i%7==0)
{ c++;
s+=i;
}
}
printf("\nThe sum is\t%d",s);
printf("\nThe number of integers greater than %d, less than %d and divisible by 7 is %d",n1, n2, c);

}
getch();
return 0;
}
