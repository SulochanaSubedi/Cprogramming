#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,d,m,n,x1,x2,denominator;
	printf("\n Enter the values of a,b,m in ax1+bx2=m:\t");
	scanf("%f %f %f",&a,&b,&m);
	printf("\n Enter the values of c,d and n in cx1+dx2=n:\t");
	scanf("%f %f %f",&c,&d,&n);
	denominator=a*d-c*b;
	if(denominator==0)
	 printf("\n The denominator is zero!!!");
	 else
	 {
	 	x1=(m*d-b*n)/denominator;
	 	x2=(n*a-m*c)/denominator;
	 	printf("\n x1=%f\tx2=%f",x1,x2);
	 }
	 getch();
	 return 0;
}
