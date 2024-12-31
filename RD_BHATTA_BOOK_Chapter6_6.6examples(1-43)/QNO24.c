//qn 24
//WAP to read a number and find prime factors of it

#include<stdio.h>
#include<conio.h>

int main()
{
int num, i=1, j, k;
printf("Enter a number:");
scanf("%d",&num);
printf("The prime factors of %d are:\n",num);
while(i<=num)
{   k=0;
if (num%i==0)
    {
    j=1;
    while (j<=i)
    {
    if (i%j==0)
    k++;
    j++;
    }
    if (k==2)
        printf("%d\t",i);
    }
    i++;
}
getch();
return 0;
}
