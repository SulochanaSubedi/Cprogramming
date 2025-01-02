/* Given the three numbers a(=8), b(=4),c and constant value PI=3.1415, 
calculate and display the following result using macros (preprocessor 
directives) 
a) c = PI * mult(a,b)   //the macro mult(a,b) perform the multiplication of a & b(a*b) 
 
b) c= PI* sum(a,b)     //the macro mult(a,b) perform the sum of a & b (a+b) 
c) c= PI *sub(a,b)     //the macro mult(a,b) perform the subtraction of a & b (a-b) 
d) c= PI*div(a,b)      //the macro mult(a,b) perform the subtraction of a & b (a-b)*/

#include<stdio.h>
#define PI 3.1415
#define mult(a,b) (a*b)
#define sum(a,b) (a+b)
#define sub(a,b) (a-b)
#define div(a,b) (a/b)
int main()
{
	float a=8,b=4,c;
	c=PI*mult(a,b);
	printf("c=PI*mult(8,4)=%.2f\n",c);
	c=PI*sum(a,b);
	printf("c=PI*sum(8,4)=%.2f\n",c);
	c=PI*sub(a,b);
	printf("c=PI*sub(8,4)=%.2f\n",c);
	c=PI*div(a,b);
	printf("c=PI*div(8,4)=%.2f",c);
	return 0;
}

    

