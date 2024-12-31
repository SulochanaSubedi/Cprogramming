#include<stdio.h>

int main()
{
	int pre1=1, pre2=2, cur, i=1, j,n, count=0;
	printf("\nEnter number of non-fibonacci number to be displayed:");
	scanf("%d", &n);
	while(count<=n)
	{
		cur=pre1+pre2;
		for(i=pre2+1;i<curr&&count++<n;i++)
	    printf("%d",i);
	    pre1=pre2;
	    pre2=cur;
	}
	return 0;
}
