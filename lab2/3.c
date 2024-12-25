//Write a C program to prompt the user to input 3 integer values and print these values in forward and reverse order.

#include<stdio.h>

int main()
{
   int a,b,c;
   printf("Enter three numbers:\n");
   scanf("%d%d%d",&a,&b,&c);
   printf("The numbers in forward order is %d, %d, %d\n",a, b,c);
   printf("The numbers in reverse order is %d, %d, %d",c, b,a);
   return 0;
} 
