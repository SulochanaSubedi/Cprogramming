//Write a program to calculate TSA of a cylinder having its radius (r=7) and height (h=10).

#include<stdio.h>
#define pi 3.14

int main()
{
   float r=7, h=10, tsa;
   tsa= (2*pi*r*r)+(2*pi*r*h);
   printf("The TSA of a cylinder is %.2f", tsa);
   return 0;	
}
