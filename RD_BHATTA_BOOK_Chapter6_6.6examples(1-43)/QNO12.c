#include<stdio.h>
#include<conio.h>
int main()
{
	int n,first=0,second=1,next,c;
	printf("Enter number of terms\n");
	scanf("%d",&n);
	printf("first %d number of fibonacci terms are:\n",n);
	for(c=0;c<n;c++)
	 {
	 	if(c<=1)
	 	 next=c;
	 	else
	 	{
	 		next=first+second;
	 		first=second;
	 		second=next;
		 }
		printf("%d",next);
	}
	getch();
	return 0;
}
