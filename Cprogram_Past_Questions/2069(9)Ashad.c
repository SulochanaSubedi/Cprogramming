#include<stdio.h>
void convert(float celc[], float faren[], int n);
void cel2far(float *far, float cel);
int main()
{
	int i, n=3;
	float celc[n], faren[n];
	for(i=0; i<n; i++)
	{
		printf("Celc[%d]=", i);
		scanf("%f", &celc[i]);
	}
	convert(celc, faren, n);
	for(i=0;i<n;i++)
	printf("%f",faren[i]);
}

void convert(float cel[], float far[], int n)
{
	int i;
	for(i=0;i<n;i++)
	cel2far(&far[i], cel[i]);
}

void cel2far(float *f, float c)
{
	*f=9.0/5.0*c+32;
}
