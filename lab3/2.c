/* Write a program to produce the output as shown below: 
x      y      expressions      results 
6  |  3   |   x=y+3        |  x=6 
6  |  3   |   x=y-2        |  x=1 
6  |  3   |   x=y*5        |  x=15 
6  |  3   |   x=x/y        |  x=2 
6  |  3   |   x=x%y        |  x=0*/

#include<stdio.h>

int main() {
    int x=6, y=3;

	printf("%c %6c %7c %6c %18s %6c %16s",'x',' ', 'y',' ',"expression",' ',"result" );
	printf("\n%d %6c %7d %6c %13s %11c %12s%d",x,'|', y,'|',"x=y+3",'|',"x=",y+3);

	printf("\n%d %6c %7d %6c %13s %11c %12s%d",x,'|', y,'|',"x=y-2",'|',"x=",y-2);
	printf("\n%d %6c %7d %6c %13s %11c %12s%d",x,'|', y,'|',"x=y*5",'|',"x=",y*5);
	printf("\n%d %6c %7d %6c %13s %11c %12s%d",x,'|', y,'|',"x=x/y",'|',"x=",x/y);
	printf("\n%d %6c %7d %6c %13s %11c %12s%d",x,'|', y,'|',"x=x%y",'|',"x=",x%y);
	return 0;
	
}

