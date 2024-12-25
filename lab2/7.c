/* Print the value of y for given x=2 and z=4 and analyze the output:
a. y=x++ + ++x;				b. y=++x + ++x;				 c. y=++x + ++x + ++x;				 d. y=x>z;
e. y=x>z?x:z;				f. y=x&z;                    g. y=x>>2+z<<1;                              */

#include<stdio.h>

int main()
{
	int x=2,z=4,y;
	
	y=x++ + ++x;
	printf("%d\t",y);
	
    y=++x + ++x;
	printf("%d\t",y); 
	
    y=++x + ++x + ++x;
	printf("%d\t",y);
	
    y=x>z;
	printf("%d\t",y);
	
    y=x>z?x:z;
	printf("%d\t",y);
	
	y=x&z;
	printf("%d\t",y);
	
	y=x>>2 + z<<1;
	printf("%d\t",y);
	
	return 0;
}
