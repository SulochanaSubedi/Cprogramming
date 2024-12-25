/*x
  xx
  xxx
  x
  xx
  xxx
  x
  x
  x*/

#include<stdio.h>

int main()
{
	int i,j,a;
	for(a=0;a<2;a++)
	{
	for(i=0;i<3;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("x");
		}
		printf("\n");
	}
    }
    for(a=0;a<3;a++)
    {
    	printf("x\n");
	}
}
