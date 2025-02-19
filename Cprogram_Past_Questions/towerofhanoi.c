#include<stdio.h>

void transfer(int n, char S, char D, char I)
{
	if(n>0)
	{
		transfer(n-1, S,I, D);
		printf("Move %d from %c to %c: \n", n, S, D);
		transfer(n-1, I, D, S);
	}
}

int main()
{
	int n;
	printf("Enter how many disks:\n");
	scanf("%d", &n);
	transfer(n, 'L', 'R' , 'C');
	return 0;
}
