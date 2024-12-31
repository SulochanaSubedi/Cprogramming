//Q.29

#include<stdio.h>

int main()
{
	int i, m, n, result=1;
	printf("\nEnter base m and power n:\t");
	scanf("%d%d", &m, &n);
	for(i=1; i<=n; i++)
		{
			result=result*m;
	    }
	    printf("\nThe value is %d", result);
	getch();
	return 0;
}
