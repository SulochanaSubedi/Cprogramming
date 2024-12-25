/*H
HE
HEL
HELL
HELLO
HELL
HEL
HE
H*/

#include<stdio.h>

int main()
{
	int i,j;
	char c[5]="HELLO";
	for(i=0;i<5;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%c", c[j]);
		}
		printf("\n");
    }
    for(i=4;i>0;i--)
    {
		for(j=0;j<i;j++)
		{
			printf("%c", c[j]);
		}
		printf("\n");
	}
	return 0;
}
