#include<stdio.h>
#define MAX 5

int main()
{
	float average;
	int Case[MAX]= {2,3,4,5,10}, i, sum=0;
	
	for(i=0; i<MAX; i+=1)
	{
		printf("Case%d=%3.2d\n",i, Case[i]);
		sum+=*(Case+i);
	}
	average=sum/MAX;
	printf("%06.2f", average);
	return 0;
}
