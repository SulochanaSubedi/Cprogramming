// WAP to find the middle number among three numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,seclarge;
	printf("Enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b&&a<c)||(a>c&&a<b))
		printf("%d is the middle number",a);
	else if((b>a&&b<c)||(b>c&&b<a))
		printf("%d is the middle number",b);
	else
		printf("%d is the middle number",c);
	getch();
	return 0;
}
