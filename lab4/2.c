#include<stdio.h>

int main()
{
	int a,b,c,largest,smallest;
	printf("Enter three numbers:\n");
	scanf("%d%d%d", &a, &b, &c);
	//Largest number condition
	if(a>b&&a>c)
	largest=a;
	else if(b>a&&b>c)
	largest=b;
	else
	largest=c;
	//Smallest number condition
	if(a<b&&a<c)
	smallest=a;
	else if(b<a&&b<c)
	smallest=b;
	else
	smallest=c;
	
	printf("The largest number: %d\n",largest);
	printf("The smallest number: %d\n",smallest);
	
	if(smallest%2==0)
	printf("Smallest number is even\n");
	else
	printf("Smallest number is odd\n");
	
	if(largest%2==0)
	printf("largest number is even");
	else
	printf("largest number is odd");
}
