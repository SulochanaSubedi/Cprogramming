#include<stdio.h>

int main()
{
	int a=0, b=1, temp, n, i, sum=0;
	
	printf("Enter how many numbers:\n");
	scanf("%d", &n);
	printf("%d\t",a);
	printf("%d\t",b);
	for(i=3; i<=n; i++)
	{
	  sum=a+b;
	  printf("%d\t",sum);
	  a=b;
	  b=sum;	
	}
	return 0;
}

/*
Output:
Enter how many numbers:
10
0       1       1       2       3       5       8       13      21      34
*/
