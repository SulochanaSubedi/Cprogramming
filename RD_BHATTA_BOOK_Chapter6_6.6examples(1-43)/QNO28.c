//Q.28

#include<stdio.h>

int main()
{
	int i, num, n1,n2;
	printf("\nEnter n1 and n2 where n1<n2:\t");
	scanf("%d%d", &n1, &n2);
	printf("\nThe prime numbers are:");
	for(num=n1; num<=n2; num++)
	{
		for(i=2; i<num; i++)
		{
			if(num%i==0)
			break;
		}
		if(i==num)
		{
			printf("\t%d", num);
		}
	}
	getch();
	return 0;
}
