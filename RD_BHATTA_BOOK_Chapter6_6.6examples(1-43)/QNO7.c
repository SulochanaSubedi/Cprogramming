// WAP to print ASCII value of all characters
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=0;i<=255;i++)
	{
		printf("ASCII value of character %c:%d\n",i,i);
		if(i%24==0)
		{
			printf("Press any key for next");
			getch();
		}
	}
	getch();
	return 0;
}
