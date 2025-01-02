//Get input of two float numbers in to variables x & y. receive the mathematical operator (+, -, *, /) using unformatted I/O into the variable Ch1 and perform operations on x & y and display the result. 

#include<stdio.h>

int main()
{
   char ch1;
   float x,y;
   printf("Enter two numers: ");
   scanf("%f%f", &x, &y);
   printf("Enter a operator (+, -, *, /): ");
   scanf(" %c", &ch1);
   if(ch1=='+')
   {
    printf("Addition is %.2f", x+y);
   }	
   else if(ch1=='-')
   {
    printf("Subtraction is %.2f", x-y);
   }
   else if(ch1=='*')
   {
    printf("Multiplication is %.2f", x*y);
   }
   else
   {
    printf("Division is %.2f", x/y);
   }
   return 0;
}
