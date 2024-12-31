//qn 17
//WAP to find cubes and squares of first 10 natural numbers

#include <stdio.h>
#include <conio.h>

int main()
{
int i;
printf("\nn\tsquare\tcube");
for (i=1; i<=10; i++)
{
    printf("\n%d\t%d\t%d",i,i*i,i*i*i);
}
getch();
return 0;
}
