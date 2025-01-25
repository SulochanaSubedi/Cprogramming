#include<stdio.h>
#include<ctype.h>

int main()
{
	char c[5]="nepal";
	int i, j, k;
	for(i=0; i<5; i++)
	{
		for(k=5; k>(i+1);k--)
		{
			putch(' ');
    	}
			for(j=0; j<=(2*i); j++)
			{
				if(i%2==0)
				putch(toupper(c[i]));
				else
				putch(tolower(c[i]));
			}
		putch('\n');
	}
	return 0;
}
