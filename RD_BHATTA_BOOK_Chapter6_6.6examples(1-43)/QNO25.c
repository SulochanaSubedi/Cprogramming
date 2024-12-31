//Q.25

#include<stdio.h>

int main()
{
	int m, n, tmp, sum=0,k,j;
	float avg;
	printf("Enter m and n:");
	scanf("%d%d", &m, &n);
	k=m;
	j=n;
	if(k>j)
	{
		tmp=k;
		k=j;
		j=tmp;
	}
	while(k<=j)
		sum=sum+ k++;
		j=abs(m-n)+1;
		printf("\n The sum of %d to %d is: %d",m, n, sum);
		avg=(float)sum/j;
		printf("\n Average of %d to %d is : %.2f", m, n, avg);
}
