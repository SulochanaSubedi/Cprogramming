/*    N
     eee
    PPPPP
   aaaaaaa
  LLLLLLLLL  */

#include<stdio.h>
#include<ctype.h>

int main()
{
	int i,j,k;
	char c[5]="NEPAL";
	for(i=0;i<5;i++)
	{
		for(k=5;k>i-1;k--)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			if(i%2==0)
			printf("%c", c[i]);
			else
			printf("%c", tolower(c[i]));
		}
		printf("\n");
	}
	return 0;
}
