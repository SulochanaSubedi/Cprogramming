#include<stdio.h>
#include<conio.h>
void main()
{int x,y;
for(y=1;y<=5;y++)
{for(x=1;x<=10;x++){

	if(x==y||10-x==y)
	{
	printf("@");}
	else{

	printf(" ");}
}
	printf("\n");
}
getch();
}
