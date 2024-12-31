#include <stdio.h>
#include<conio.h>
int main()
{
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   for(;n%3==0;)
   {
    printf("The number is divisible by 3",n--);
   }

    getch();
    return 0;
}
