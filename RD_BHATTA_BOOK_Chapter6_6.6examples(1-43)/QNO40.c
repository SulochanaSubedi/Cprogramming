#include<stdio.h>
#include<conio.h>
int main()
{
	int marks, n80=0, n60=0, n40=0, n140=0, n81to100=0;
	int n61to80=0, n41to60=0,n0to40=0;
	do
	{
		printf("n\Enter marks(-VE) marks to exit:)");
		scanf("\\d",&marks);
		if(marks>80)
		n80++;
		if(marks>60)
		n60++;
		if(marks>40)
		n40++;
		else
		n140++;
		if(marks>80 && marks<=100)
		n81to100++;
		else if(marks>60 && marks<=80)
		n61to80++;
		else if(marks>40 && marks<=60)
		n41to60++;
		else if (marks>0 && marks<=40)
		n0to40++;
		else
		break;
	}while(1);
	printf("\n Number of marks > 80 is: %d",n80);
	printf("\n Number of marks > 60 is: %d",n60);
	printf("\n Number of marks > 40 is: %d",n40);
	printf("\n Number of marks < 40 is: %d",n140);
	printf("\n Number of marks 81 to 100 is: %d",n81to100);
	printf("\n number of marks 61 to 80 is; %d",n61to80);
	printf("\n number of marks 41 to 60 is: %d",n41to60);
	printf("\n number of marks 0 to 40 is: %d",n0to40);
	getch();
	return 0;
}

