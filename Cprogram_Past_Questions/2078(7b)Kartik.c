#include <stdio.h>
#include<conio.h>
void fun(int a[] );
void main()
{int a[5]={1,2,3,4,5},p;

printf("Enter the position:");
scanf("%d",&p);
printf("Enter the element to be added");
scanf("%d",&a[p-1]);

fun(a);
getch();
}
void fun(int a[])
{int i;
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
}

