/*programming
  rogrammin
  ogrammi
  gramm
  ram
  a*/

#include<stdio.h>

int main()
{
    int i,j;
	char ch[11]="programming";
	for(i=0;i<6; i++)
	{
		for(j=0; j<(11-2*i); j++)
		{
			printf("%c", ch[j+i]);
		}
		printf("\n");
	}
	return 0;
}
