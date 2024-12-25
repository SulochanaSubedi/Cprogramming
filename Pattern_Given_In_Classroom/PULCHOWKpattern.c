/*P
  PU
  PUL
  PULC 
  PULCH
  PULCHO
  PULCHOW
  PULCHOWK*/

#include<stdio.h>

int main()
{
	int i,j;
	char c[8]="PULCHOWK";
	for(i=0; i<8; i++)
	{
		for(j=0;j<=i; j++)
		{
			printf("%c", c[j] );
		}
		printf("\n");
	}
}
