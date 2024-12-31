//Q.31

#include<stdio.h>

int main()
{
	long int deciNum, binNum, revSum=0,q,r, i=1;
	printf("\nEnter decimal number:\t");
	scanf("%ld", &deciNum);
	do
	{
		q=deciNum/2;
		r=deciNum%2;
		deciNum=q;
		revSum+=r*i;
		i*=10;
	}while(q!=0);
	printf("\n The corresponding binary number is:\t%ld", revSum);
	getch();
	return 0;
}
