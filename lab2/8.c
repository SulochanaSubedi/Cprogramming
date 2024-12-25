//Write a program to print the size of int, char, float, double and long double data types in C.

#include<stdio.h>

int main()
{
	int a;
	char b;
	float c;
	double d;
	long double e;
	int k,l,m,n,o;
	k=sizeof(a);
	l=sizeof(b);
	m=sizeof(c);
	n=sizeof(d);
	o=sizeof(e);
	printf("Size of int is %d\n",k);
	printf("Size of float is %d\n",m);
	printf("Size of char is %d\n",l);
	printf("Size of double is %d\n",n);
	printf("Size of long double is %d",o);
	return 0;
}
