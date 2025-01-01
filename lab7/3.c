// Write a program to initialize one dimensional array of size 8 and display the sum and average of array elements. 

#include<stdio.h>

int main()
{
	int a[8],i,sum=0,avg;
	printf("Enter 8 numbers:\n");
	for(i=0; i<8; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<8; i++)
	{
		sum+=a[i];
	}
	avg=sum/8;
	printf("The sum is %d\n", sum);
	printf("The average is %d\n", avg);
    return 0;	
}

/*
Output:
Enter 8 numbers:
1
2
3
4
5
6
7
8
The sum is 36
The average is 4
*/
