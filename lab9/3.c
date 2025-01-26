#include<stdio.h>
#include<math.h>

struct distance
{
	int a1, b1, a2, b2;
}d;

int main()
{
	float result;
	printf("Enter the value of first cartesian points:\n");
	scanf("%d%d", &d.a1, &d.b1);
	printf("Enter the value of second cartesian points:\n");
	scanf("%d%d", &d.a2, &d.b2);
	int temp=pow((d.a1-d.a2),2)+pow((d.b1-d.b2),2);
	result=sqrt(temp);
	printf("The required result is %.2f", result);
	return 0;
}

/*
Output:
Enter the value of first cartesian points:
2 3
Enter the value of second cartesian points:
3 2
The required result is 1.41
*/
