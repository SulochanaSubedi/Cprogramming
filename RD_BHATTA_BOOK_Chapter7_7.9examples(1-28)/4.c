#include<stdio.h>

float greater(float x, float y)
{
	if(x>y)
	return x;
	else
	return y;
}

int main()
{
	float first, second, third, fourth, fifth, sixth;
	float fs, fst, fstf, fstff, fstffs;
	printf("Enter six numbers:");
	scanf("%f%f%f%f%f%f", &first, &second, &third, &fourth, &fifth, &sixth);
	fs=greater(first, second);
	fst=greater(fs, third);
	fstf=greater(fst, fourth);
	fstff=greater(fstf, fifth);
	fstffs=greater(fstff, sixth);
	printf("The greatest number is \t%.2f", fstffs);
	return 0;
}
