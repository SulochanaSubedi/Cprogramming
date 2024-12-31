#include<conio.h>
#include<stdio.h>
#define n 20
#define pi 3.1428
int main()
{
	float x, sum, term, xdegree;
	int i;
	printf("\nEnter value of x in deg'ree:\t");
	scanf("%f",&x);
	xdegree=x;
	x=x*pi/180;
	sum=x;
	term=x;
	for(i=1;i<=n;i++)
	{
		term=-1*term*x*x/(2*i*(2*i+1));
		sum+=term;
	}
printf("\nThe sin(%.2f)=%.3f", xdegree,sum);
getch();
return 0;
}
