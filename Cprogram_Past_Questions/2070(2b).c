#include<stdio.h>
#include<math.h>

int main()
{
	float root;
	float i=1.0, sum=0;
	do{
		sum=2*i-1;
		printf("\t%f\n", sum);
		i*=5/3;
	}while(sum<=1.5);
	root=pow(i, 1/2);
	printf("\n%.3f", root);
	return 0;
}
