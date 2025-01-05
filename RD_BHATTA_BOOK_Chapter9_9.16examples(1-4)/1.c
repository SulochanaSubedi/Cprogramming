#include<string.h>

int abc(int*, int*);
int main()
{
	int a, b, l;
	char name[]="Best of luck\n";
	printf("Enter two numbers\n");
	scanf("%d%d", &a, &b);
	abc(&a, &b);
	l=strlen(name);
	printf("\nLength=%d\n", l);
	printf("a=%d and b=%d\n", a,b);
    return 0;
}
int abc(int *a, int *b)
{
	*a=*a+5;
	*b=*b+3;
	printf("a=%d and b=%d", *a, *b);
}
